function Tnonholonomic = getTnonholonomic( robotState )


ic = getInitConfig();    
M = ic.M;
Rw = ic.Rw;
T = ic.T;
thb = robotState(M+1);

Tnonholo =  [ cos(thb), 0;  sin(thb), 0; 0, 1;] * [ Rw/2 Rw/2; Rw/T -Rw/T];
% Tnonholo =  [ cos(thb), 0;  sin(thb), 0; 0, 1;];
Tnonholonomic = [eye(M-2), zeros(M-2, 2); zeros(3, M-2), Tnonholo];

end

