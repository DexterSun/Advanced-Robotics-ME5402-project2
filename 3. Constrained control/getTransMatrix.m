function [Trans, TREE] = getTransMatrix( robotState )

[ th1, th2, th3, xb, yb, thb, lb, hb] = pickUpData( robotState );
scale = 1;

d1 = 40*scale;
d2 = 30*scale;
d3 = 20*scale;


TREE = eye(4);
% origin to arm_base 0
Trans(:, :, 1) = [ cos(thb), -sin(thb), 0, xb;
    sin(thb),  cos(thb), 0, yb;
    0,         0, 1,                0;
    0,         0, 0,                1];

% 0 to j1
Trans(:, :, 1) = Trans(:, :, 1) * [ cos(th1), 0, -sin(th1), 0;
    sin(th1),   0,  cos(th1),     0;
    0,   -1,      0,     d1;
    0,         0, 0,       1];

%j1 to j2
Trans(:, :, 2) =[ cos(th2),  -sin(th2), 0, d2*cos(th2);
    sin(th2),         cos(th2), 0, d2*sin(th2);
    0, 0,1, 0;
    0,         0, 0, 1];

% j2 to ee
Trans(:, :, 3)=[ cos(th3), -sin(th3), 0, d3*cos(th3);
    sin(th3),  cos(th3), 0,  d3*sin(th3);
    0,         0, 1,  0;
    0,         0, 0,  1];


for i=1:size(Trans, 3)
    TREE = TREE*Trans(:, :, i);
end

end

function [th1, th2, th3, xb, yb, thb, lb, hb ] = pickUpData( robotState )

[ th1, th2, th3, xb, yb, thb ] = convertRobotState2Params( robotState );

ic = getInitConfig();
lb = ic.lb; 
hb = ic.Heightb; 


end







