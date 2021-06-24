function [eeState_ref, eeVel_ref] = getEERef_stay( eeState_prev )


eeState_ref = eeState_prev;
eeVel_ref = eeState_ref - eeState_prev;

end

