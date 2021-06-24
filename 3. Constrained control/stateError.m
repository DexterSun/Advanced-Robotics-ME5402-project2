function figObj = stateError( figNum,is, t, eeState, eeState_ref)

if isempty(figNum)
    figObj = figure();
else
    figObj = figure(figNum);
end

subplot(2,1,1)
plot(t, eeState_ref(:,1), t, eeState(:,1))
xlabel('time')
ylabel('x[mm]')
legend('x_{EEref}','x_{EE}')
grid on 



subplot(2,1,2)
plot(t, eeState_ref(:,2), t, eeState(:,2))
legend('y_{EEref}','y_{EE}')
xlabel('time')
ylabel('y[mm]')
grid on 

end

