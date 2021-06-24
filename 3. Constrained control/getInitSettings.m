function is = getInitSettings( )
% put unchanged parameters into initConfig
is = getInitConfig();

%% FOR CONTROL
% is.Kpdgain = 1*diag([1,1,1,0.5,0.5,0.5]);
is.Kpdgain = 1*diag([5,5,5,0.1,0.1,0.1]);
is.Kredundancy = 1*10e1 * diag([1,1,1,1,1]);

is.eeRefGenerationMethod = 'myPath';                 
is.inputGenerationMethod = 'V=0';


%% FOR INITIARIZE
load('./DATA/000_bvhData.mat', 'targetState')
robotInit.state(1) = (-(0)+180)*is.DEG2RAD;
robotInit.state(2) = ((-90)+270)*is.DEG2RAD;
robotInit.state(3) = (-(0)+90)*is.DEG2RAD;
robotInit.state(4:6) = [0, 0, 0];
eeState_temp = getEEState(robotInit.state);
is.robotInit.state = [0,0,0,0,0,0];
is.robotInit.vel = [0, 0, 0, 0, 0];

% ----
J = getJ(is.robotInit.state);
is.eeInit.state = getEEState(is.robotInit.state);
is.eeInit.vel = getEEVel(is.robotInit.vel, J);

is.manipulabilityInit.total = sqrt(abs(det(J*J')));
is.manipulabilityInit.arm = sqrt(abs(det(J(1:is.N, 1:is.M-2)*J(1:is.N, 1:is.M-2)')));


%% FOR SIMULATOR
is.simStepWidth = 0.0001;    
is.ctrlStepWidth = 0.0001;   
is.startTime = 0;
is.endTime = 20;

% ----
is.maxCtrlStep = (is.endTime - is.startTime)/is.ctrlStepWidth;
is.maxSimStep = is.ctrlStepWidth/is.simStepWidth;
is.maxSize = is.maxSimStep*is.maxCtrlStep;


end

