function [ J ] = getJ( robotState )

[N, M, th1, th2, th3, thb, Rw, T, lb ] = pickUpData(robotState);

J = zeros(N, M);

J(1, 1) = -10*sin(th1 + thb)*(2*cos(th2 + th3) + 3*cos(th2));

J(1, 2) = -10*cos(th1 + thb)*(2*sin(th2 + th3) + 3*sin(th2));

J(1, 3) = -20*cos(th1 + thb)*sin(th2 + th3);

J(1, 4) = (Rw*cos(thb))/2 - (Rw*(20*cos(th2 + th3)*sin(th1 + thb) + 30*sin(th1 + thb)*cos(th2)))/T;

J(1, 5) = (Rw*cos(thb))/2 + (Rw*(20*cos(th2 + th3)*sin(th1 + thb) + 30*sin(th1 + thb)*cos(th2)))/T;

J(2, 1) = 10*cos(th1 + thb)*(2*cos(th2 + th3) + 3*cos(th2));

J(2, 2) = -10*sin(th1 + thb)*(2*sin(th2 + th3) + 3*sin(th2));

J(2, 3) = -20*sin(th2 + th3)*sin(th1 + thb);

J(2, 4) = (Rw*sin(thb))/2 + (Rw*(20*cos(th2 + th3)*cos(th1 + thb) + 30*cos(th1 + thb)*cos(th2)))/T;

J(2, 5) = (Rw*sin(thb))/2 - (Rw*(20*cos(th2 + th3)*cos(th1 + thb) + 30*cos(th1 + thb)*cos(th2)))/T;

J(3, 1) = 0;

J(3, 2) = - 20*cos(th2 + th3) - 30*cos(th2);

J(3, 3) = -20*cos(th2 + th3);

J(3, 4) = 0;

J(3, 5) = 0;

J(4, 1) = 0;

J(4, 2) = 0;

J(4, 3) = 0;

J(4, 4) = 0;

J(4, 5) = 0;

J(5, 1) = 0;

J(5, 2) = sign(cos(th2 + th3));

J(5, 3) = sign(cos(th2 + th3));

J(5, 4) = 0;

J(5, 5) = 0;

J(6, 1) = 1;

J(6, 2) = 0;

J(6, 3) = 0;

J(6, 4) = Rw/T;

J(6, 5) = -Rw/T;


end

function [N, M, th1, th2, th3, thb, Rw, T, lb] = pickUpData(robotState)

[th1, th2, th3, xb, yb, thb] = convertRobotState2Params(robotState);
ic = getInitConfig();
N = ic.N;
M = ic.M;
Rw = ic.Rw;
T = ic.T;
lb = ic.lb; 


end
