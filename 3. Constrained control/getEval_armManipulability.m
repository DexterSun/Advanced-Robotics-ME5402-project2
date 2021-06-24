function Kvec = getEval_armManipulability( N, M, robotState, J )


Jarm = J(1:N, 1:M-2);
invJarm = inv(Jarm);
DJarmDq = getDJarmDq( robotState );

DVDq = zeros( size(DJarmDq, 3), 1 );
for k = 1 : size(DJarmDq, 3)
    for j = 1 : size(DJarmDq, 2)
        for i = 1 : size(DJarmDq, 1)
            DVDq(k) = DVDq(k) + invJarm(j, i)*DJarmDq(i, j, k);
        end
    end
end

Tnonholo = getTnonholonomic(robotState);
Kvec = (det(Jarm) * DVDq' * Tnonholo)';

end

