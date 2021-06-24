function figObj = topView( figNum, is, t, robotState, eeState, eeState_ref )

if isempty(figNum)
    figObj = figure();
else
    figObj = figure(figNum);
end
plot(robotState(:,4), robotState(:,5), 'r', eeState(:,1), eeState(:,2), 'b', eeState_ref(:,1), eeState_ref(:,2), 'g--')
xlabel('x[mm]')
ylabel('y[mm]')
legend('base', 'ee', 'ee_{ref}')
grid on 
end

