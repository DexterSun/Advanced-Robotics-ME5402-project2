function DJDq = getDJDq( robotState )


[ N,M,th1,th2,th3,thb,Rw,T,lb] = pickUpData( robotState );

DJDq = zeros(N, M, M+1);

DJDq(1, 1, 1) = -10*cos(th1 + thb)*(2*cos(th2 + th3) + 3*cos(th2));

DJDq(1, 1, 2) = 10*sin(th1 + thb)*(2*sin(th2 + th3) + 3*sin(th2));

DJDq(1, 1, 3) = 20*sin(th2 + th3)*sin(th1 + thb);

DJDq(1, 1, 4) = 0;

DJDq(1, 1, 5) = 0;

DJDq(1, 1, 6) = -10*cos(th1 + thb)*(2*cos(th2 + th3) + 3*cos(th2));

DJDq(1, 2, 1) = 10*sin(th1 + thb)*(2*sin(th2 + th3) + 3*sin(th2));

DJDq(1, 2, 2) = -10*cos(th1 + thb)*(2*cos(th2 + th3) + 3*cos(th2));

DJDq(1, 2, 3) = -20*cos(th2 + th3)*cos(th1 + thb);

DJDq(1, 2, 4) = 0;

DJDq(1, 2, 5) = 0;

DJDq(1, 2, 6) = 10*sin(th1 + thb)*(2*sin(th2 + th3) + 3*sin(th2));

DJDq(1, 3, 1) = 20*sin(th2 + th3)*sin(th1 + thb);

DJDq(1, 3, 2) = -20*cos(th2 + th3)*cos(th1 + thb);

DJDq(1, 3, 3) = -20*cos(th2 + th3)*cos(th1 + thb);

DJDq(1, 3, 4) = 0;

DJDq(1, 3, 5) = 0;

DJDq(1, 3, 6) = 20*sin(th2 + th3)*sin(th1 + thb);

DJDq(1, 4, 1) = (Rw*(40*cos(th2 + th3)*cos(th1 + thb) + 60*cos(th1 + thb)*cos(th2)))/(2*T);

DJDq(1, 4, 2) = -(Rw*(60*sin(th1 + thb)*sin(th2) + 40*sin(th2 + th3)*sin(th1 + thb)))/(2*T);

DJDq(1, 4, 3) = -(20*Rw*sin(th2 + th3)*sin(th1 + thb))/T;

DJDq(1, 4, 4) = 0;

DJDq(1, 4, 5) = 0;

DJDq(1, 4, 6) = (Rw*(2*cos(thb) - T*sin(thb) + 40*cos(th2 + th3)*cos(th1 + thb) + 60*cos(th1 + thb)*cos(th2)))/(2*T);

DJDq(1, 5, 1) = -(Rw*(40*cos(th2 + th3)*cos(th1 + thb) + 60*cos(th1 + thb)*cos(th2)))/(2*T);

DJDq(1, 5, 2) = (Rw*(60*sin(th1 + thb)*sin(th2) + 40*sin(th2 + th3)*sin(th1 + thb)))/(2*T);

DJDq(1, 5, 3) = (20*Rw*sin(th2 + th3)*sin(th1 + thb))/T;

DJDq(1, 5, 4) = 0;

DJDq(1, 5, 5) = 0;

DJDq(1, 5, 6) = -(Rw*(2*cos(thb) + T*sin(thb) + 40*cos(th2 + th3)*cos(th1 + thb) + 60*cos(th1 + thb)*cos(th2)))/(2*T);

DJDq(2, 1, 1) = -10*sin(th1 + thb)*(2*cos(th2 + th3) + 3*cos(th2));

DJDq(2, 1, 2) = -10*cos(th1 + thb)*(2*sin(th2 + th3) + 3*sin(th2));

DJDq(2, 1, 3) = -20*cos(th1 + thb)*sin(th2 + th3);

DJDq(2, 1, 4) = 0;

DJDq(2, 1, 5) = 0;

DJDq(2, 1, 6) = -10*sin(th1 + thb)*(2*cos(th2 + th3) + 3*cos(th2));

DJDq(2, 2, 1) = -10*cos(th1 + thb)*(2*sin(th2 + th3) + 3*sin(th2));

DJDq(2, 2, 2) = -10*sin(th1 + thb)*(2*cos(th2 + th3) + 3*cos(th2));

DJDq(2, 2, 3) = -20*cos(th2 + th3)*sin(th1 + thb);

DJDq(2, 2, 4) = 0;

DJDq(2, 2, 5) = 0;

DJDq(2, 2, 6) = -10*cos(th1 + thb)*(2*sin(th2 + th3) + 3*sin(th2));

DJDq(2, 3, 1) = -20*cos(th1 + thb)*sin(th2 + th3);

DJDq(2, 3, 2) = -20*cos(th2 + th3)*sin(th1 + thb);

DJDq(2, 3, 3) = -20*cos(th2 + th3)*sin(th1 + thb);

DJDq(2, 3, 4) = 0;

DJDq(2, 3, 5) = 0;

DJDq(2, 3, 6) = -20*cos(th1 + thb)*sin(th2 + th3);

DJDq(2, 4, 1) = (Rw*(40*cos(th2 + th3)*sin(th1 + thb) + 60*sin(th1 + thb)*cos(th2)))/(2*T);

DJDq(2, 4, 2) = (Rw*(40*cos(th1 + thb)*sin(th2 + th3) + 60*cos(th1 + thb)*sin(th2)))/(2*T);

DJDq(2, 4, 3) = (20*Rw*cos(th1 + thb)*sin(th2 + th3))/T;

DJDq(2, 4, 4) = 0;

DJDq(2, 4, 5) = 0;

DJDq(2, 4, 6) = (Rw*(2*sin(thb) + T*cos(thb) + 40*cos(th2 + th3)*sin(th1 + thb) + 60*sin(th1 + thb)*cos(th2)))/(2*T);

DJDq(2, 5, 1) = -(Rw*(40*cos(th2 + th3)*sin(th1 + thb) + 60*sin(th1 + thb)*cos(th2)))/(2*T);

DJDq(2, 5, 2) = -(Rw*(40*cos(th1 + thb)*sin(th2 + th3) + 60*cos(th1 + thb)*sin(th2)))/(2*T);

DJDq(2, 5, 3) = -(20*Rw*cos(th1 + thb)*sin(th2 + th3))/T;

DJDq(2, 5, 4) = 0;

DJDq(2, 5, 5) = 0;

DJDq(2, 5, 6) = -(Rw*(2*sin(thb) - T*cos(thb) + 40*cos(th2 + th3)*sin(th1 + thb) + 60*sin(th1 + thb)*cos(th2)))/(2*T);

DJDq(3, 1, 1) = 0;

DJDq(3, 1, 2) = 0;

DJDq(3, 1, 3) = 0;

DJDq(3, 1, 4) = 0;

DJDq(3, 1, 5) = 0;

DJDq(3, 1, 6) = 0;

DJDq(3, 2, 1) = 0;

DJDq(3, 2, 2) = 20*sin(th2 + th3) + 30*sin(th2);

DJDq(3, 2, 3) = 20*sin(th2 + th3);

DJDq(3, 2, 4) = 0;

DJDq(3, 2, 5) = 0;

DJDq(3, 2, 6) = 0;

DJDq(3, 3, 1) = 0;

DJDq(3, 3, 2) = 20*sin(th2 + th3);

DJDq(3, 3, 3) = 20*sin(th2 + th3);

DJDq(3, 3, 4) = 0;

DJDq(3, 3, 5) = 0;

DJDq(3, 3, 6) = 0;

DJDq(3, 4, 1) = 0;

DJDq(3, 4, 2) = 0;

DJDq(3, 4, 3) = 0;

DJDq(3, 4, 4) = 0;

DJDq(3, 4, 5) = 0;

DJDq(3, 4, 6) = 0;

DJDq(3, 5, 1) = 0;

DJDq(3, 5, 2) = 0;

DJDq(3, 5, 3) = 0;

DJDq(3, 5, 4) = 0;

DJDq(3, 5, 5) = 0;

DJDq(3, 5, 6) = 0;

DJDq(4, 1, 1) = 0;

DJDq(4, 1, 2) = 0;

DJDq(4, 1, 3) = 0;

DJDq(4, 1, 4) = 0;

DJDq(4, 1, 5) = 0;

DJDq(4, 1, 6) = 0;

DJDq(4, 2, 1) = 0;

DJDq(4, 2, 2) = 0;

DJDq(4, 2, 3) = 0;

DJDq(4, 2, 4) = 0;

DJDq(4, 2, 5) = 0;

DJDq(4, 2, 6) = 0;

DJDq(4, 3, 1) = 0;

DJDq(4, 3, 2) = 0;

DJDq(4, 3, 3) = 0;

DJDq(4, 3, 4) = 0;

DJDq(4, 3, 5) = 0;

DJDq(4, 3, 6) = 0;

DJDq(4, 4, 1) = 0;

DJDq(4, 4, 2) = 0;

DJDq(4, 4, 3) = 0;

DJDq(4, 4, 4) = 0;

DJDq(4, 4, 5) = 0;

DJDq(4, 4, 6) = 0;

DJDq(4, 5, 1) = 0;

DJDq(4, 5, 2) = 0;

DJDq(4, 5, 3) = 0;

DJDq(4, 5, 4) = 0;

DJDq(4, 5, 5) = 0;

DJDq(4, 5, 6) = 0;

DJDq(5, 1, 1) = 0;

DJDq(5, 1, 2) = 0;

DJDq(5, 1, 3) = 0;

DJDq(5, 1, 4) = 0;

DJDq(5, 1, 5) = 0;

DJDq(5, 1, 6) = 0;

DJDq(5, 2, 1) = 0;

DJDq(5, 2, 2) = -2*dirac(cos(th2 + th3))*sin(th2 + th3);

DJDq(5, 2, 3) = -2*dirac(cos(th2 + th3))*sin(th2 + th3);

DJDq(5, 2, 4) = 0;

DJDq(5, 2, 5) = 0;

DJDq(5, 2, 6) = 0;

DJDq(5, 3, 1) = 0;

DJDq(5, 3, 2) = -2*dirac(cos(th2 + th3))*sin(th2 + th3);

DJDq(5, 3, 3) = -2*dirac(cos(th2 + th3))*sin(th2 + th3);

DJDq(5, 3, 4) = 0;

DJDq(5, 3, 5) = 0;

DJDq(5, 3, 6) = 0;

DJDq(5, 4, 1) = 0;

DJDq(5, 4, 2) = 0;

DJDq(5, 4, 3) = 0;

DJDq(5, 4, 4) = 0;

DJDq(5, 4, 5) = 0;

DJDq(5, 4, 6) = 0;

DJDq(5, 5, 1) = 0;

DJDq(5, 5, 2) = 0;

DJDq(5, 5, 3) = 0;

DJDq(5, 5, 4) = 0;

DJDq(5, 5, 5) = 0;

DJDq(5, 5, 6) = 0;

DJDq(6, 1, 1) = 0;

DJDq(6, 1, 2) = 0;

DJDq(6, 1, 3) = 0;

DJDq(6, 1, 4) = 0;

DJDq(6, 1, 5) = 0;

DJDq(6, 1, 6) = 0;

DJDq(6, 2, 1) = 0;

DJDq(6, 2, 2) = 0;

DJDq(6, 2, 3) = 0;

DJDq(6, 2, 4) = 0;

DJDq(6, 2, 5) = 0;

DJDq(6, 2, 6) = 0;

DJDq(6, 3, 1) = 0;

DJDq(6, 3, 2) = 0;

DJDq(6, 3, 3) = 0;

DJDq(6, 3, 4) = 0;

DJDq(6, 3, 5) = 0;

DJDq(6, 3, 6) = 0;

DJDq(6, 4, 1) = 0;

DJDq(6, 4, 2) = 0;

DJDq(6, 4, 3) = 0;

DJDq(6, 4, 4) = 0;

DJDq(6, 4, 5) = 0;

DJDq(6, 4, 6) = 0;

DJDq(6, 5, 1) = 0;

DJDq(6, 5, 2) = 0;

DJDq(6, 5, 3) = 0;

DJDq(6, 5, 4) = 0;

DJDq(6, 5, 5) = 0;

DJDq(6, 5, 6) = 0;


end


function [N,M,th1,th2,th3,thb,Rw,T,lb] = pickUpData( robotState )

ic = getInitConfig();
N = ic.N; M = ic.M;

[ th1, th2, th3, xb, yb, thb ] = convertRobotState2Params( robotState );
Rw = ic.Rw;
T = ic.T;
lb = ic.lb; 


end

