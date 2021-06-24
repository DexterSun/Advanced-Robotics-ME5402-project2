function figObj = robotVel( figNum, is, t, robotVel )


v = (robotVel(:,4) + robotVel(:,5))*is.Rw/2;
w = (robotVel(:,4) - robotVel(:,5))*is.Rw/is.T;

if isempty(figNum)
    figObj = figure();
else
    figObj = figure(figNum);
end

subplot(3,1,1)
plot(t, v*0.001)
xlabel('time')
ylabel('v[m/s]')
legend('v')
grid on 

subplot(3,1,2)
plot(t, w*is.RAD2DEG)
xlabel('time')
ylabel('\omega[deg/s]')
legend('\omega')
grid on  

 subplot(3,1,3)
 plot(t, robotVel(:,1)*is.RAD2DEG,t, robotVel(:,2)*is.RAD2DEG,t, robotVel(:,3)*is.RAD2DEG)
 xlabel('time')
 ylabel('[deg/s]')
 legend('d\theta_1/dt','d\theta_2/dt','d\theta_3/dt')
 grid on 
 

end

