function Kvec = getEval_totalManipulabilityUsingDJDq( robotState, J )


Jsq = J*J';
invJsq = inv(Jsq);
DJDq = getDJDq(robotState);

DVDq = zeros( size(DJDq, 3), 1 );
for k = 1 : length(DVDq)
    for j = 1 : size(Jsq, 2)
        for i = 1 : size(Jsq, 1)
            DVDq(k) = DVDq(k) + invJsq(j, i)*sum_dJdqJPlusJdJdq(i, j, k, DJDq, J);
        end
    end
end

Tnonholo = getTnonholonomic(robotState);
Kvec = ((1/2)*sqrt(det(Jsq)) * DVDq' * Tnonholo)';

end


function ret = sum_dJdqJPlusJdJdq(i, j, k, DJDq, J)
ret = 0;
for l = 1:size(DJDq, 2)
    ret = ret + (DJDq(i, l, k) * J(j, l) + J(i, l) * DJDq(j, l, k) );
end
end




