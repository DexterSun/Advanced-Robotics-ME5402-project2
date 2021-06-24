classdef CController < handle    
    properties(GetAccess = public, SetAccess = private)
        is;
        bvhTime;
        bvhTargetState;
    end
    properties(Access = private)
        eeRefPrev;
        robotPrev;
    end    
    
    methods
        function self = CController(initSettings, robotState_init, robotVel_init, eeState_init, eeVel_init)
            self.is = initSettings;
            self.robotPrev.state = robotState_init;
            self.robotPrev.vel = robotVel_init;
            self.eeRefPrev.state = eeState_init;
            self.eeRefPrev.vel = eeVel_init;
        end
        
        function [u, eeRef] = generate(self, curTime, curRobotState, curRobotVel)
            eeRef = self.generateEERef(curTime);
            u = self.generateInput(eeRef, curRobotState);
            
            % update internal data
            self.robotPrev.state = curRobotState;
            self.robotPrev.vel = curRobotVel;
            self.eeRefPrev = eeRef;
        end
    end
    
    methods(Access = private)
        function eeRef = generateEERef(self, currTime)
                    [eeState_ref, eeVel_ref] = getEERef_fromMyPath(self.is.ctrlStepWidth, self.eeRefPrev.state);
            eeRef.state = eeState_ref;
            eeRef.vel = eeVel_ref;
        end
        function u = generateInput(self, eeRef, curRobotState)
            J = getJ(curRobotState);
            pinvJ = pinv(J);       
%             disp(num2str(pinvJ))
            eeCurr.state = getEEState(curRobotState);
            u = ( pinvJ * (eeRef.vel'-self.is.Kpdgain*(eeCurr.state' - eeRef.state')))';
        end
    end

end