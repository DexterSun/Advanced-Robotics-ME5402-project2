function tree = RobotArm(varargin)
% Denavit Hartenberg parameters [a alpha d theta]]
%   mdhparams = [0   -pi/2   0.4 0;
%                0.3 0       0   0; 
%                0.2 0       0   0];
narginchk(0,1)

if nargin > 0
    DataFormat = varargin{1};
    validateattributes(varargin{1}, {'char','string'}, {},'RobotArm', 'DataFormat');
    DataFormat = convertStringsToChars(DataFormat);
    tree = rigidBodyTree('MaxNumBodies', 3, 'DataFormat', DataFormat); 
else
    tree = rigidBodyTree('MaxNumBodies', 3, 'DataFormat', 'column');
end

%Define nonzero gravity
tree.Gravity(3) = -9.81;

mdhparams = [0   -pi/2   0.4 0;
             0.3 0       0   0;
             0.2 0       0   0];

%Add body1 to rigid body tree
body1 = rigidBody('body1');
body1.Joint = rigidBodyJoint('joint1','revolute');
body1.Joint.setFixedTransform(mdhparams(1,:),'mdh');
% addVisual(body1,"Mesh",'link1.stl')
tree.addBody(body1,tree.BaseName);

%Add body2 to rigid body tree
body2 = rigidBody('body2');
body2.Joint = rigidBodyJoint('joint2','revolute');
body2.Joint.setFixedTransform(mdhparams(2,:),'mdh');
tree.addBody(body2, 'body1');

%Add tool to rigid body tree
body3 = rigidBody('body3');
body3.Joint = rigidBodyJoint('joint3','revolute');
body3.Joint.setFixedTransform(mdhparams(3,:), 'mdh');
tree.addBody(body3, 'body2');

show(tree,'Visuals','on')
end

