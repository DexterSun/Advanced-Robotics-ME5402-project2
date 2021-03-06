syms th1 th2 th3 real
syms xb yb thb lb hb real
% syms d0 d1 d2 d3 d3_offset d4 d5 d6  
syms v w real
syms Rw T positive 


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
% coordinate of endeffector
xREE = simplify( TREE(1,4) );
yREE = simplify( TREE(2,4) );
zREE = simplify( TREE(3,4) );
rollREE  = simplify( atan(TREE(3,2)/TREE(3,3)) );
pitchREE = simplify( atan( -TREE(3,1)/sqrt(TREE(3,2)^2 + TREE(3,3)^2) )) ;
yawREE   = simplify( atan(  TREE(2,1)/TREE(1,1) ));
fileID = fopen('./Result/p_ee.txt','a');
fprintf(fileID, 'eeState(1) = %s;\n\n', char(xREE));
fprintf(fileID, 'eeState(2) = %s;\n\n', char(yREE));
fprintf(fileID, 'eeState(3) = %s;\n\n', char(zREE));
fprintf(fileID, 'eeState(4) = %s;\n\n', char(rollREE));
fprintf(fileID, 'eeState(5) = %s;\n\n', char(pitchREE));
fprintf(fileID, 'eeState(6) = %s;\n\n', char(yawREE));
fprintf(fileID, '\nend');
fclose(fileID);



eeState = [xREE; yREE; zREE; rollREE; pitchREE; yawREE];

armState = [th1; th2; th3];
Jarm = jacobian(eeState , armState);


baseState = [xb ; yb; thb];
Jbase = jacobian(eeState , baseState);

% Tnonholo = [ cos(thb) , 0; sin(thb) , 0; 0, 1];
Tnonholo = [ cos(thb) , 0; sin(thb) , 0; 0, 1]*[ Rw/2 Rw/2; Rw/T -Rw/T]; % constraint
Jbase_nonholo = Jbase*Tnonholo;  % new constrained J (*omega of left and right wheels)

robotState = [armState; baseState];
J = simplify([Jarm , Jbase_nonholo]);

fileID = fopen('./result/J.txt','a');
for i = 1:size(J, 1)
    for j = 1:size(J,2)
            fprintf(fileID, 'J(%i, %i) = %s;\n\n', i, j, char(J(i,j)));
    end    
end
fprintf(fileID, '\nend');
fclose(fileID);

fileID = fopen('./result/DJDq.txt','a');
DJDq = sym(zeros(size(J, 1), size(J, 2), size(robotState, 1)));
for i = 1:size(DJDq, 1)
    for j = 1:size(DJDq, 2)
        for k = 1:size(DJDq, 3)
            DJDq(i, j, k) = diff(J(i, j), robotState(k));
                fprintf(fileID, 'DJDq(%i, %i, %i) = %s;\n\n', i, j, k, char(DJDq(i,j,k)));
        end
    end    
end
fprintf(fileID, '\nend');
fclose(fileID);

fileID = fopen('./result/DJsqDq.txt','a');
Jsquare = J*J';
DJsqDq = sym(zeros(size(Jsquare, 1), size(Jsquare, 2), size(robotState, 1)));
for i = 1:size(DJsqDq, 1)
    for j = 1:size(DJsqDq, 2)
        for k = 1:size(DJsqDq, 3)
            DJsqDq(i, j, k) = diff(Jsquare(i, j), robotState(k));
                fprintf(fileID, 'DJsqDq(%i, %i, %i) = %s;\n\n', i, j, k, char(DJsqDq(i,j,k)));
        end
    end    
end
fprintf(fileID, '\nend');
fclose(fileID);

fileID = fopen('./result/DJarmDq.txt','a');
DJarmDq = sym(zeros(size(Jarm, 1), size(Jarm, 2), size(robotState, 1)));
for i = 1:size(DJarmDq, 1)
    for j = 1:size(DJarmDq, 2)
        for k = 1:size(DJarmDq, 3)
            DJarmDq(i, j, k) = diff(Jarm(i, j), robotState(k));
                fprintf(fileID, 'DJarmDq(%i, %i, %i) = %s;\n\n', i, j, k, char(DJarmDq(i,j,k)));
        end
    end    
end
fprintf(fileID, '\nend');
fclose(fileID);









