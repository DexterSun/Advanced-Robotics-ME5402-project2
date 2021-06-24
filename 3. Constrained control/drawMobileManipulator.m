function figObj = drawMobileManipulator( figNum, is, eeState, eeRefState, robotState, targetStep )


if isempty(figNum)
    figObj = figure('Position', is.windowPosition);
    figure(figObj);
else
    figObj = figure(figNum);
end
M = is.M;
% trajectory
plot3(eeState(1:targetStep, 1), eeState(1:targetStep, 2), eeState(1:targetStep, 3), 'Color', 'b');
plot3(eeRefState(1:targetStep, 1), eeRefState(1:targetStep, 2), eeRefState(1:targetStep, 3), 'Color', 'g');
plot3(robotState(1:targetStep, M-1), robotState(1:targetStep, M), zeros(targetStep, 1)-32, 'Color', 'r');
line(eeRefState(targetStep, 1), eeRefState(targetStep, 2), eeRefState(targetStep, 3), 'Color', 'g', 'Marker', 'x', 'LineWidth', 2, 'MarkerSize', 6);

% link
[armJointAxisX, armJointAxisY, armJointAxisZ] = getAxisesPosition(robotState(targetStep, :));
armJointAxisX = [armJointAxisX(1);armJointAxisX];
armJointAxisY = [armJointAxisY(1);armJointAxisY];
armJointAxisZ = [0;armJointAxisZ];
line(armJointAxisX, armJointAxisY, armJointAxisZ, 'Color', 'b', 'LineWidth', 3, 'Marker', 'o', 'MarkerSize', 6);

% base
[baseCornerX, baseCornerY, baseCornerZ] = getBaseCornerPosition(robotState(targetStep, :));
baseCornerZ = baseCornerZ - 32;
patch(baseCornerX, baseCornerY, baseCornerZ,  'w', 'LineWidth', 1, 'FaceColor','r', 'FaceLighting', 'flat');

end

