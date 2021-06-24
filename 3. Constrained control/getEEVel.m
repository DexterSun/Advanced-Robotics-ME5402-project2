function eeVel = getEEVel( robotVel, J )


eeVel = (J*robotVel')';

end

