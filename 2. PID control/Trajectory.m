function xd = Trajectory (t,trac)
    xd = zeros(3,1);
    
    switch trac
        case 1
            xd(1) = 25*t+50;
            xd(2) = 25*t;
            xd(3) = 0;
        case 2
            xd(1) = 20;
            xd(2) = t;
            xd(3) = 20 + 5*sin(0.2*t*pi);
        case 3
            xd(1) = 10*sin(0.01*t*pi)+45;
            xd(2) = 2+t;
            xd(3) = 45*cos(0.001*t*pi);
        case 4 
            r = 0.035 + 0.015*cos(3*(0.2*t*pi));
            xd(1) = 0.5;
            xd(2) = 0.0 + r*cos(0.2*t*pi);
            xd(3) = 0.45 + r*sin(0.2*t*pi);
        case 5
            xd(1) = 40+10*cos(0.01*t*pi);
            xd(2) = 10*sin(0.01*t*pi)+10*((cos(0.01*t*pi)).^2).^(1/3);
            xd(3) = 45;
    end