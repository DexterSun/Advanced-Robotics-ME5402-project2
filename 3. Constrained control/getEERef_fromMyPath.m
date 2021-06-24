function [ eeState_ref, eeVel_ref ] = getEERef_fromMyPath( dt, eeState_prev )

    
% [mm]
A = 50;
B = 0;

velocity = [
    0.5*A;
    0.5*A;
    0;
    0;
    0;
    0
];


eeVel_ref = velocity';
eeState_ref = eeState_prev + eeVel_ref*dt;

end

