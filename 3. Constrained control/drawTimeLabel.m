function figObj = drawTimeLabel( figNum, is, T, targetStep)


if isempty(figNum)
    figObj = figure();
else
    figObj = figure(figNum);
end

s = strcat('time: ', num2str(T(targetStep)), '[sec]' );
uicontrol('style', 'text', 'string', s, 'position', [(is.windowPosition(3)-150-10), 1, 150, 30], 'FontSize', 12, 'HorizontalAlignment', 'right');

end

