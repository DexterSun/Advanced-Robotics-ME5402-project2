clear all
close all
clc

Txy = @(d) [1 0 0 d; 0 1 0 0; 0 0 1 0; 0 0 0 1];
Tyt = @(d) [1 0 0 0; 0 1 0 d; 0 0 1 0; 0 0 0 1];
Tt0 = @(theta) [cos(theta), -sin(theta) 0, 0; sin(theta), cos(theta), 0, 0; ...
                0, 0, 1.0, 0; 0, 0, 0, 1.0];
T01 = @(theta) [cos(theta), 0, -sin(theta), 0; sin(theta), 0, cos(theta), 0; ...
                0, -1.0, 0, 40; 0, 0, 0, 1.0];
T12 = @(theta) [cos(theta), -sin(theta), 0, 30*cos(theta); sin(theta), cos(theta), 0, 30*sin(theta); ...
	            0, 0, 1.0, 0; 0, 0, 0, 1.0];
T23 = @(theta) [cos(theta), -sin(theta), 0, 20*cos(theta); sin(theta), cos(theta), 0, 20*sin(theta); ...
                0, 0, 1.0, 0; 0, 0, 0, 1.0];
      
q = [0 0 0 0 0 0]';

S = 20;
t = 0.001;
N = S/t;
trac = 1;

x_plot = zeros(3,N);
xd_plot = zeros(3,N);
xb_plot = zeros(3,N);
q_plot = zeros(6,N);
qp_plot = zeros(6,N);
e_plot = zeros(1,N);
t_plot = zeros(1,N);

k0 = 0.2;
d = 0.01;

KP = eye(3,3)*1.5;
KI = eye(3,3)*0.001;
KD = eye(3,3)*0.5;

e_old = zeros(3,1);
ei = zeros(3,1);

for i=1:N
    disp(['t = (' num2str(round(i*t)) '/' num2str(S) ')'])
    
    Tx = Txy(q(1));
    Ty = Tx*Tyt(q(2));
    Tt = Ty*Tt0(q(3));
    T1 = Tt*T01(q(4));
    T2 = T1*T12(q(5));
    T3 = T2*T23(q(6));
    
%     xd = zeros(6,3);
%     xi = zeors(6,3);
%     xd(6)= Trajectory(i*t,trac);
    xd = Trajectory(i*t,trac);
    xi = T3(1:3,4);
    xb = Tt(1:3,4);
    
    
    
    e = xd - xi;
    ed = e - e_old;
    ei = ei + e;
    
    u = KP*e + KI*ei + KD*ed;
    e_old = e;
    
    J = Jacob(q);
    Ji = pinv(J);
    
    q0 = zeros(6,1);

    qp = Ji*u; 
    
    q = q + qp*t;
    
    x_plot(:,i) = xi;
    xd_plot(:,i) = xd;
    xb_plot(:,i) = xb;
    q_plot(1:2,i) = q(1:2);
    q_plot(3:6,i) = q(3:6)*180/pi;
    qp_plot(1:2,i) = qp(1:2);
    qp_plot(3:6,i) = qp(3:6)*180/pi;
    e_plot(i) = norm(e);
    t_plot(i) = i*t;
end

save(['_pd_' num2str(trac)],'x_plot','xd_plot','q_plot','qp_plot','e_plot','t_plot')
%%
figure
subplot(2,1,1)
plot(t_plot,xd_plot(1,:))
hold on
plot(t_plot,x_plot(1,:))
ylabel('x[mm]') 
xlabel('time') 
hold on
grid on
legend('x_{EEref}','x_{EE}')

subplot(2,1,2)
plot(t_plot,xd_plot(2,:))
hold on
plot(t_plot,x_plot(2,:))
ylabel('y[mm]') 
xlabel('time') 
hold on
grid on
legend('y_{EEref}','y_{EE}')
%%
figure
hold on
grid on
plot(t_plot,xd_plot(3,:))
plot(t_plot,x_plot(3,:))
ylabel('z[mm]') 
xlabel('time') 
legend('z_{EEref}','z_{EE}')
%%
figure
hold on
grid on
plot3(xb_plot(1,:),xb_plot(2,:),xb_plot(3,:),'r')
plot3(x_plot(1,:),x_plot(2,:),x_plot(3,:),'b')
plot3(xd_plot(1,:),xd_plot(2,:),xd_plot(3,:),'-.g')
ylabel('y[mm]') 
xlabel('x[mm]')
% zlabel('z[mm]')
% legend('ee','ee_{ref}')
legend('base','ee','ee_{ref}')
%%
figure
subplot(3,1,1)
hold on
grid on
plot(t_plot,sqrt(qp_plot(1,:).^2+qp_plot(2,:).^2)/1000)
ylabel('v[m/s]') 
xlabel('time')
legend('v')

subplot(3,1,2)
hold on
grid on
plot(t_plot,qp_plot(3,:))
ylabel('\omega[deg/s]') 
xlabel('time')
legend('\omega')

subplot(3,1,3)
hold on
grid on
plot(t_plot,qp_plot(4,:))
plot(t_plot,qp_plot(5,:))
plot(t_plot,qp_plot(6,:))
ylabel('\omega[deg/s]') 
xlabel('time')
legend('d\theta_1/dt','d\theta_2/dt','d\theta_3/dt')
%%
figure
subplot(2,1,1)
hold on
grid on
plot(t_plot,q_plot(3,:))
ylabel('[deg/s]') 
xlabel('time')
legend('\theta_b')

subplot(2,1,2)
hold on
grid on
plot(t_plot,q_plot(4,:))
plot(t_plot,q_plot(5,:))
plot(t_plot,q_plot(6,:))
ylabel('[deg/s]') 
xlabel('time')
legend('\theta_1','\theta_2','\theta_3')
%%
figure
hold on
grid on
plot(t_plot,e_plot)
ylabel('error]') 
xlabel('time')
legend('e')
