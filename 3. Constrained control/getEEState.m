function eeState = getEEState( robotState )



[ th1, th2, th3, xb, yb, thb, lb, hb ] = pickUpData( robotState );
% [Trans, TREE] = getTransMatrix( robotState );
eeState(1) = xb + 20*cos(th2 + th3)*cos(th1 + thb) + 30*cos(th1 + thb)*cos(th2);

eeState(2) = yb + 20*cos(th2 + th3)*sin(th1 + thb) + 30*sin(th1 + thb)*cos(th2);

eeState(3) = 40 - 30*sin(th2) - 20*sin(th2 + th3);

eeState(4) = atan(-Inf*(cos(th2)*cos(th3) - sin(th2)*sin(th3)));

eeState(5) = atan(sin(th2 + th3)/abs(cos(th2 + th3)));

eeState(6) = atan(tan(th1 + thb));


end

function [th1, th2, th3, xb, yb, thb, lb, hb ] = pickUpData( robotState )

[ th1, th2, th3, xb, yb, thb ] = convertRobotState2Params( robotState );

ic = getInitConfig();
lb = ic.lb; 
hb = ic.Heightb; 


end
