function state = interpState( timeline, stateTimeline, time )

 
for n = 1:size(stateTimeline,1)
    state(n) = interp1(timeline, stateTimeline(n,:), time);
end
end

