% MANIPULATOR TRAJECTORY GENERATION 
% Generates Joint space trajectories by performing inverse kinematics on
% each waypoint and interpolating between the joint angles.
%
% Copyright 2019 The MathWorks, Inc.

%% Setup
clear, clc, close all
robot= importrobot('car.SLDASM.urdf');
show(robot)
% addVisual(body,"Mesh",filename)
% robot=loadrobot('car.slx')
eeName = 'link_3';
%% Define waypoint information
% createWaypointData;
waypoints=[-0.1 -0.35 1.4 ; 0.2 0.2 1.6 ; -0.2 0.3 1.5 ; 0.1 -0.3 1.5 ; -0.2 -0.4 1.6]';

orientations = [0     0    0;
                pi/8  0    0; 
                0    pi/2  0;
               -pi/8  0    0;
                0     0    0]';
            
% Array of waypoint times
waypointTimes = 0:4:16;

% Trajectory sample time
ts = 0.2;
trajTimes = 0:ts:waypointTimes(end);
            
% Velocity (cubic and quintic)
waypointVels = 0.1 *[ 0  1  0;
                     -1  0  0;
                      0 -1  0;
                      1  0  0;
                      0  1  0]';
maxWayponits=20;

% Acceleration (quintic only)
waypointAccels = zeros(size(waypointVels));

% Acceleration times (trapezoidal only)
waypointAccelTimes = diff(waypointTimes)/4;
%% Define IK
ik = inverseKinematics('RigidBodyTree',robot);
ikWeights = [1 1 1 0.1 0.1 0.1];
% this is initial position of ee
ikInitGuess = homeConfiguration(robot);
% ikInitGuess(3).JointPosition = pi/2;
% ikInitGuess(4).JointPosition = -pi/3;
% ikInitGuess(5).JointPosition = pi/3;
% ikInitGuess(ikInitGuess > pi) = ikInitGuess(ikInitGuess > pi) - 2*pi;
% ikInitGuess(ikInitGuess < -pi) = ikInitGuess(ikInitGuess < -pi) + 2*pi;

%% Set up plot
plotMode = 1; % 0 = None, 1 = Trajectory, 2 = Coordinate Frames
show(robot,'Visual','on');
xlim([-1.5 1.5]), ylim([-1.5 1.5]), zlim([0 2])
hold on
% if plotMode == 1
%     hTraj = plot3(waypoints(1,1),waypoints(2,1),waypoints(3,1),'b.-');
% end
% plot3(waypoints(1,:),waypoints(2,:),waypoints(3,:),'ro','LineWidth',2);

%% Solve IK for all waypoints
includeOrientation = false; % Set this to use zero vs. nonzero orientations

numWaypoints = size(waypoints,2);
numJoints = numel(robot.homeConfiguration);
jointWaypoints = zeros(numJoints,numWaypoints);
test=[0 0 0];

for idx = 1:numWaypoints
    tgtPose = trvec2tform(waypoints(:,idx)');
    % from final point to get homogeneous matrix
    [Config,info] = ik(eeName,tgtPose,ikWeights,ikInitGuess);
%     Config(1).JointPosition = 0;
%         config=cell2mat(struct2cell(homeConfiguration(robot)))
    for i=1:6
        config(i)=Config(i).JointPosition;
    end
    test(1)=config(6);
    test(2)=config(5);
    jointWaypoints(:,idx) = config';
    % store config of each point
end
%     config=homeConfiguration(robot);
    

%% Generate trajectory on joint space
trajType = 'quintic';
switch trajType
    case 'trap'
        [q,qd,qdd] = trapveltraj(jointWaypoints,numel(trajTimes), ...
            'AccelTime',repmat(waypointAccelTimes,[numJoints 1]), ... 
            'EndTime',repmat(diff(waypointTimes),[numJoints 1]));
                            
    case 'cubic'
        [q,qd,qdd] = cubicpolytraj(jointWaypoints,waypointTimes,trajTimes, ... 
            'VelocityBoundaryCondition',zeros(numJoints,numWaypoints));
        
    case 'quintic'
        [q,qd,qdd] = quinticpolytraj(jointWaypoints,waypointTimes,trajTimes, ... 
            'VelocityBoundaryCondition',zeros(numJoints,numWaypoints), ...
            'AccelerationBoundaryCondition',zeros(numJoints,numWaypoints));
        
    case 'bspline'
        ctrlpoints = jointWaypoints; % Can adapt this as needed
        [q,qd,qdd] = bsplinepolytraj(ctrlpoints,waypointTimes([1 end]),trajTimes);
        
    otherwise
        error('Invalid trajectory type! Use ''trap'', ''cubic'', ''quintic'', or ''bspline''');
end

% To visualize the trajectory, run the following line
% plotTrajectory(trajTimes,q,qd,qdd,'Names',"Joint " + string(1:numJoints),'WaypointTimes',waypointTimes)
% showdetails(robot)
%% Trajectory following loop
cconf = homeConfiguration(robot);
for idx = 1:numel(trajTimes)  
    for linknum = 1:6
        cconf(linknum).JointPosition = q(linknum,idx);
    end
%     FinalConfig(7).Joint
%     for m =1:7
%         FinalConfig(m).Joint=a(m)
%     end
%     FinalConfig(1).Name = 'Body1';
%     FinalConfig(2).Name = 'Body2';
%     FinalConfig(3).Name = 'Body3';
%     FinalConfig(4).Name = 'Body4';
%     FinalConfig(5).Name = 'Body5';
%     FinalConfig(6).Name = 'Body6';
%     FinalConfig(7).Name = 'Body7';
    % Find Cartesian points for visualization
%     T=[1 0 0 1;
%        0 1 0 1;
%        0 0 1 0;
%        0 0 0 1];
    eeTform = getTransform(robot,cconf,eeName);
    if plotMode == 1
        eePos = tform2trvec(eeTform);
        set(hTraj,'xdata',[hTraj.XData eePos(1)], ...
                  'ydata',[hTraj.YData eePos(2)], ...
                  'zdata',[hTraj.ZData eePos(3)]);
    elseif plotMode == 2
        plotTransforms(tform2trvec(eeTform),tform2quat(eeTform),'FrameSize',0.05);
    end

    % Show the robot
    show(robot,cconf,'PreservePlot',false,'Visual','on');
    title(['Trajectory at t = ' num2str(trajTimes(idx))])
    drawnow   
    
end