function J = Jacob(q)
    q3 = q(3);
    q4 = q(4);
    q5 = q(5);
    q6 = q(6);

    
    J = [ 1, 0,  -sin(q3+q4)*(10*cos(q5+q6)+30*cos(q5)), -sin(q3+q4)*(10*cos(q5+q6)+30*cos(q5)), -cos(q3+q4)*(10*sin(q5+q6)+30*sin(q5)), -10*cos(q3+q4)*sin(q5+q6) ;
          0, 1,  cos(q3+q4)*(10*cos(q5+q6)+30*cos(q5)),  cos(q3+q4)*(10*cos(q5+q6)+30*cos(q5)),  -sin(q3+q4)*(10*sin(q5+q6)+30*sin(q5)), -10*sin(q3+q4)*sin(q5+q6);
          0, 0,  0,                                      0,                                      -10*cos(q5+q6)-30*cos(q5),              -10*cos(q5+q6)];
      
%       Tnonholo = [cos(q3),0;sin(q3),0;0,1]*[5,5;2/3,-2/3];
%       J(1:3,1:3) =   J(1:3,1:3)*Tnonholo;