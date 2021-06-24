
clear;
close all;
clc;
%% Mobile Manipulator Simulator
mm = getInitSettings();

%% Declaration
theSystem = CMobileManipulator(mm, mm.robotInit.state, mm.robotInit.vel);
theController = CController(mm, mm.robotInit.state, mm.robotInit.vel, mm.eeInit.state, mm.eeInit.vel); 
theData = CDataManager(mm);

%% Initialize
[uInit, eeRefInit] = theController.generate(0, mm.robotInit.state, mm.robotInit.vel);
theData.initialize(mm.robotInit, mm.eeInit, mm.manipulabilityInit, uInit, eeRefInit);

%% Main Loop
totalStep = 1;
for ctrlStep = 1 : mm.maxCtrlStep
    disp([num2str(100*ctrlStep/mm.maxCtrlStep), ' %'])
    [uCurr, eeRefCurr] = theController.generate(theData.T(totalStep),...
                         theData.robot.state(totalStep,:),...
                         theData.robot.vel(totalStep,:));
    
    
    for simStep = 1 : mm.maxSimStep
        totalStep = totalStep + 1;
        [robotCurr, eeCurr, manipulabilityCurr] = theSystem.update(uCurr);
        
        theData.record(totalStep, robotCurr, eeCurr, manipulabilityCurr, uCurr, eeRefCurr);
    end
    
end
disp('-------------------------')
disp('----------END----------')
disp('-------------------------')

%% Graph (see:CDataManager) 
theData.graphStateError(1);
theData.graphArmJoints(2);
theData.graphTopView(3);
theData.graphRobotVel(4);

%% View (see:CDataManager)
%theData.viewMobileManipulator(6, 0.0, [20, 60]);

%% Video (see:CDataManager)
theData.videoMobileManipulator([20,60]);