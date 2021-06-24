function initConfig = getInitConfig( )


%% Define
ic.N = 6;  % x,y,z,roll,pitch,yaw
ic.M = 5;  % 
ic.DEG2RAD = (pi/180);
ic.RAD2DEG = (180/pi);

%% Viewer Config
windowLeft = 50;
windowBottom = 50;
windowWidth = 640;
windowHeight = 480;
ic.windowPosition = [windowLeft, windowBottom, windowWidth, windowHeight];

fieldUnit = 200;
sceneXmin = - fieldUnit;
sceneXmax = fieldUnit;
sceneYmin = -fieldUnit;
sceneYmax = fieldUnit;
sceneZmin = -32;
sceneZmax = fieldUnit;
ic.sceneAxisSize = [ sceneXmin, sceneXmax, sceneYmin, sceneYmax, sceneZmin, sceneZmax];

%% Robot Config
ic.Lengthb = 80;
ic.Heightb = 32;
ic.Widthb = 60;


scale = 1;


ic.d1_offset = 40*scale+ic.Heightb;
ic.d2_offset = 30*scale;
ic.d3_offset = 20*scale;


ic.Rw = 10; % radius of wheel
ic.T = 15; % ;
ic.lb = 150; % 0.2*(ic.Lengthb/2);


%% Return
initConfig = ic;

end

