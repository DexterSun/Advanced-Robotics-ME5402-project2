function robotState = getRobotState( dt, robotState_prev, robotVel_prev )


Tnonholonomic = getTnonholonomic(robotState_prev);

robotState = ( robotState_prev' + (Tnonholonomic*robotVel_prev')*dt )';

end

