function [ th1, th2, th3, xb, yb, thb ] = convertRobotState2Params( robotState )

th1 = robotState(1);
th2 = robotState(2);
th3 = robotState(3);
xb = robotState(4);
yb = robotState(5);
thb = robotState(6);

end

