function figObj = armJoints( figNum, is, t,  robotState)

if isempty(figNum)
    figObj = figure();
else
    figObj = figure(figNum);
end

subplot(2,1,1)
plot(t, robotState(:,6)*is.RAD2DEG)
xlabel('time')
ylabel('[deg]')
legend('\theta_b')
grid on

subplot(2,1,2)
plot(t, robotState(:,1)*is.RAD2DEG, t, robotState(:,2)*is.RAD2DEG, t, robotState(:,3)*is.RAD2DEG)
xlabel('time')
ylabel('[deg]')
legend('\theta_1','\theta_2','\theta_3')
grid on

end

