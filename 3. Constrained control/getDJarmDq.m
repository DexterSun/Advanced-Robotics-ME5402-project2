function DJarmDq = getDJarmDq( robotState )


[N,M,th1,th2,th3,thb] = pickUpData( robotState );

DJarmDq = zeros(N, N, M+1);

DJarmDq(1, 1, 1) = - 20*cos(th2 + th3)*cos(th1 + thb) - 30*cos(th1 + thb)*cos(th2);

DJarmDq(1, 1, 2) = 30*sin(th1 + thb)*sin(th2) + 20*sin(th2 + th3)*sin(th1 + thb);

DJarmDq(1, 1, 3) = 20*sin(th2 + th3)*sin(th1 + thb);

DJarmDq(1, 1, 4) = 0;

DJarmDq(1, 1, 5) = 0;

DJarmDq(1, 1, 6) = - 20*cos(th2 + th3)*cos(th1 + thb) - 30*cos(th1 + thb)*cos(th2);

DJarmDq(1, 2, 1) = 30*sin(th1 + thb)*sin(th2) + 20*sin(th2 + th3)*sin(th1 + thb);

DJarmDq(1, 2, 2) = - 20*cos(th2 + th3)*cos(th1 + thb) - 30*cos(th1 + thb)*cos(th2);

DJarmDq(1, 2, 3) = -20*cos(th2 + th3)*cos(th1 + thb);

DJarmDq(1, 2, 4) = 0;

DJarmDq(1, 2, 5) = 0;

DJarmDq(1, 2, 6) = 30*sin(th1 + thb)*sin(th2) + 20*sin(th2 + th3)*sin(th1 + thb);

DJarmDq(1, 3, 1) = 20*sin(th2 + th3)*sin(th1 + thb);

DJarmDq(1, 3, 2) = -20*cos(th2 + th3)*cos(th1 + thb);

DJarmDq(1, 3, 3) = -20*cos(th2 + th3)*cos(th1 + thb);

DJarmDq(1, 3, 4) = 0;

DJarmDq(1, 3, 5) = 0;

DJarmDq(1, 3, 6) = 20*sin(th2 + th3)*sin(th1 + thb);

DJarmDq(2, 1, 1) = - 20*cos(th2 + th3)*sin(th1 + thb) - 30*sin(th1 + thb)*cos(th2);

DJarmDq(2, 1, 2) = - 20*cos(th1 + thb)*sin(th2 + th3) - 30*cos(th1 + thb)*sin(th2);

DJarmDq(2, 1, 3) = -20*cos(th1 + thb)*sin(th2 + th3);

DJarmDq(2, 1, 4) = 0;

DJarmDq(2, 1, 5) = 0;

DJarmDq(2, 1, 6) = - 20*cos(th2 + th3)*sin(th1 + thb) - 30*sin(th1 + thb)*cos(th2);

DJarmDq(2, 2, 1) = - 20*cos(th1 + thb)*sin(th2 + th3) - 30*cos(th1 + thb)*sin(th2);

DJarmDq(2, 2, 2) = - 20*cos(th2 + th3)*sin(th1 + thb) - 30*sin(th1 + thb)*cos(th2);

DJarmDq(2, 2, 3) = -20*cos(th2 + th3)*sin(th1 + thb);

DJarmDq(2, 2, 4) = 0;

DJarmDq(2, 2, 5) = 0;

DJarmDq(2, 2, 6) = - 20*cos(th1 + thb)*sin(th2 + th3) - 30*cos(th1 + thb)*sin(th2);

DJarmDq(2, 3, 1) = -20*cos(th1 + thb)*sin(th2 + th3);

DJarmDq(2, 3, 2) = -20*cos(th2 + th3)*sin(th1 + thb);

DJarmDq(2, 3, 3) = -20*cos(th2 + th3)*sin(th1 + thb);

DJarmDq(2, 3, 4) = 0;

DJarmDq(2, 3, 5) = 0;

DJarmDq(2, 3, 6) = -20*cos(th1 + thb)*sin(th2 + th3);

DJarmDq(3, 1, 1) = 0;

DJarmDq(3, 1, 2) = 0;

DJarmDq(3, 1, 3) = 0;

DJarmDq(3, 1, 4) = 0;

DJarmDq(3, 1, 5) = 0;

DJarmDq(3, 1, 6) = 0;

DJarmDq(3, 2, 1) = 0;

DJarmDq(3, 2, 2) = 20*sin(th2 + th3) + 30*sin(th2);

DJarmDq(3, 2, 3) = 20*sin(th2 + th3);

DJarmDq(3, 2, 4) = 0;

DJarmDq(3, 2, 5) = 0;

DJarmDq(3, 2, 6) = 0;

DJarmDq(3, 3, 1) = 0;

DJarmDq(3, 3, 2) = 20*sin(th2 + th3);

DJarmDq(3, 3, 3) = 20*sin(th2 + th3);

DJarmDq(3, 3, 4) = 0;

DJarmDq(3, 3, 5) = 0;

DJarmDq(3, 3, 6) = 0;

DJarmDq(4, 1, 1) = 0;

DJarmDq(4, 1, 2) = 0;

DJarmDq(4, 1, 3) = 0;

DJarmDq(4, 1, 4) = 0;

DJarmDq(4, 1, 5) = 0;

DJarmDq(4, 1, 6) = 0;

DJarmDq(4, 2, 1) = 0;

DJarmDq(4, 2, 2) = 0;

DJarmDq(4, 2, 3) = 0;

DJarmDq(4, 2, 4) = 0;

DJarmDq(4, 2, 5) = 0;

DJarmDq(4, 2, 6) = 0;

DJarmDq(4, 3, 1) = 0;

DJarmDq(4, 3, 2) = 0;

DJarmDq(4, 3, 3) = 0;

DJarmDq(4, 3, 4) = 0;

DJarmDq(4, 3, 5) = 0;

DJarmDq(4, 3, 6) = 0;

DJarmDq(5, 1, 1) = 0;

DJarmDq(5, 1, 2) = 0;

DJarmDq(5, 1, 3) = 0;

DJarmDq(5, 1, 4) = 0;

DJarmDq(5, 1, 5) = 0;

DJarmDq(5, 1, 6) = 0;

DJarmDq(5, 2, 1) = 0;

DJarmDq(5, 2, 2) = - (sin(th2 + th3)/abs(cos(th2 + th3)) - (2*sign(cos(th2 + th3))^2*sin(th2 + th3)^3)/abs(cos(th2 + th3))^3 + (2*dirac(cos(th2 + th3))*sin(th2 + th3)^3)/abs(cos(th2 + th3))^2 - (3*sign(cos(th2 + th3))*cos(th2 + th3)*sin(th2 + th3))/abs(cos(th2 + th3))^2)/(sin(th2 + th3)^2/abs(cos(th2 + th3))^2 + 1) - (((2*sign(cos(th2 + th3))*sin(th2 + th3)^3)/abs(cos(th2 + th3))^3 + (2*cos(th2 + th3)*sin(th2 + th3))/abs(cos(th2 + th3))^2)*(cos(th2 + th3)/abs(cos(th2 + th3)) + (sign(cos(th2 + th3))*sin(th2 + th3)^2)/abs(cos(th2 + th3))^2))/(sin(th2 + th3)^2/abs(cos(th2 + th3))^2 + 1)^2;

DJarmDq(5, 2, 3) = - (sin(th2 + th3)/abs(cos(th2 + th3)) - (2*sign(cos(th2 + th3))^2*sin(th2 + th3)^3)/abs(cos(th2 + th3))^3 + (2*dirac(cos(th2 + th3))*sin(th2 + th3)^3)/abs(cos(th2 + th3))^2 - (3*sign(cos(th2 + th3))*cos(th2 + th3)*sin(th2 + th3))/abs(cos(th2 + th3))^2)/(sin(th2 + th3)^2/abs(cos(th2 + th3))^2 + 1) - (((2*sign(cos(th2 + th3))*sin(th2 + th3)^3)/abs(cos(th2 + th3))^3 + (2*cos(th2 + th3)*sin(th2 + th3))/abs(cos(th2 + th3))^2)*(cos(th2 + th3)/abs(cos(th2 + th3)) + (sign(cos(th2 + th3))*sin(th2 + th3)^2)/abs(cos(th2 + th3))^2))/(sin(th2 + th3)^2/abs(cos(th2 + th3))^2 + 1)^2;

DJarmDq(5, 2, 4) = 0;

DJarmDq(5, 2, 5) = 0;

DJarmDq(5, 2, 6) = 0;

DJarmDq(5, 3, 1) = 0;

DJarmDq(5, 3, 2) = - (sin(th2 + th3)/abs(cos(th2 + th3)) - (2*sign(cos(th2 + th3))^2*sin(th2 + th3)^3)/abs(cos(th2 + th3))^3 + (2*dirac(cos(th2 + th3))*sin(th2 + th3)^3)/abs(cos(th2 + th3))^2 - (3*sign(cos(th2 + th3))*cos(th2 + th3)*sin(th2 + th3))/abs(cos(th2 + th3))^2)/(sin(th2 + th3)^2/abs(cos(th2 + th3))^2 + 1) - (((2*sign(cos(th2 + th3))*sin(th2 + th3)^3)/abs(cos(th2 + th3))^3 + (2*cos(th2 + th3)*sin(th2 + th3))/abs(cos(th2 + th3))^2)*(cos(th2 + th3)/abs(cos(th2 + th3)) + (sign(cos(th2 + th3))*sin(th2 + th3)^2)/abs(cos(th2 + th3))^2))/(sin(th2 + th3)^2/abs(cos(th2 + th3))^2 + 1)^2;

DJarmDq(5, 3, 3) = - (sin(th2 + th3)/abs(cos(th2 + th3)) - (2*sign(cos(th2 + th3))^2*sin(th2 + th3)^3)/abs(cos(th2 + th3))^3 + (2*dirac(cos(th2 + th3))*sin(th2 + th3)^3)/abs(cos(th2 + th3))^2 - (3*sign(cos(th2 + th3))*cos(th2 + th3)*sin(th2 + th3))/abs(cos(th2 + th3))^2)/(sin(th2 + th3)^2/abs(cos(th2 + th3))^2 + 1) - (((2*sign(cos(th2 + th3))*sin(th2 + th3)^3)/abs(cos(th2 + th3))^3 + (2*cos(th2 + th3)*sin(th2 + th3))/abs(cos(th2 + th3))^2)*(cos(th2 + th3)/abs(cos(th2 + th3)) + (sign(cos(th2 + th3))*sin(th2 + th3)^2)/abs(cos(th2 + th3))^2))/(sin(th2 + th3)^2/abs(cos(th2 + th3))^2 + 1)^2;

DJarmDq(5, 3, 4) = 0;

DJarmDq(5, 3, 5) = 0;

DJarmDq(5, 3, 6) = 0;

DJarmDq(6, 1, 1) = 0;

DJarmDq(6, 1, 2) = 0;

DJarmDq(6, 1, 3) = 0;

DJarmDq(6, 1, 4) = 0;

DJarmDq(6, 1, 5) = 0;

DJarmDq(6, 1, 6) = 0;

DJarmDq(6, 2, 1) = 0;

DJarmDq(6, 2, 2) = 0;

DJarmDq(6, 2, 3) = 0;

DJarmDq(6, 2, 4) = 0;

DJarmDq(6, 2, 5) = 0;

DJarmDq(6, 2, 6) = 0;

DJarmDq(6, 3, 1) = 0;

DJarmDq(6, 3, 2) = 0;

DJarmDq(6, 3, 3) = 0;

DJarmDq(6, 3, 4) = 0;

DJarmDq(6, 3, 5) = 0;

DJarmDq(6, 3, 6) = 0;


end

end

function [N,M,th1,th2,th3,thb] = pickUpData( robotState )

ic = getInitConfig();
N = ic.N; M = ic.M;

[ th1, th2, th3, xb, yb, thb ] = convertRobotState2Params( robotState );



end
