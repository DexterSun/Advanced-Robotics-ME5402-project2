function figObj = sceneMobileManipulatorWithBVH( figNum, is, T, eeState, eeRefState, robotState, bvhT, bvhData, targetNodeName,  viewTime, viewPoint )

if isempty(figNum)
    figObj = figure('Position', is.windowPosition);
    figure(figObj);
else
    figObj = figure(figNum);
end
    
M = is.M;
%% VIEWER
grid on;    hold on;
view(viewPoint);
targetStepForMM = floor(interp1(T, (1:length(T)), viewTime));
targetStepForBVH = floor(interp1(bvhT, (1:length(bvhT)), viewTime));
centerAxisPos = [bvhData(1).Dxyz(1, targetStepForBVH), bvhData(1).Dxyz(2, targetStepForBVH), 0];
% centerAxisPos = [robotState(targetStepForBVH, is.M-1), robotState(targetStepForBVH, is.M), 0.0];
currentAxisSize = is.sceneAxisSize + [ centerAxisPos(1), centerAxisPos(1), centerAxisPos(2), centerAxisPos(2), centerAxisPos(3), centerAxisPos(3) ];
axis(round(currentAxisSize));

drawBVH(figObj, is, bvhT, bvhData, targetNodeName, viewTime);
drawMobileManipulator( figObj, is, eeState, eeRefState, robotState, targetStepForMM);
drawTimeLabel( figObj, is, T, targetStepForMM);

end

