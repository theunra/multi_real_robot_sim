
"use strict";

let ObstaclesInfo = require('./ObstaclesInfo.js');
let BallInfo = require('./BallInfo.js');
let WorldModelInfo = require('./WorldModelInfo.js');
let MotorInfo = require('./MotorInfo.js');
let PPoint = require('./PPoint.js');
let StrategyInfo = require('./StrategyInfo.js');
let Point2d = require('./Point2d.js');
let RobotInfo = require('./RobotInfo.js');
let PassCommands = require('./PassCommands.js');
let Point3d = require('./Point3d.js');
let simulation_strategy = require('./simulation_strategy.js');
let OminiVisionInfo = require('./OminiVisionInfo.js');
let VelCmd = require('./VelCmd.js');
let BallInfo3d = require('./BallInfo3d.js');
let MotionCmd = require('./MotionCmd.js');
let CoachInfo = require('./CoachInfo.js');
let TargetInfo = require('./TargetInfo.js');
let FrontBallInfo = require('./FrontBallInfo.js');
let OdoInfo = require('./OdoInfo.js');
let currentCmd = require('./currentCmd.js');
let Angle = require('./Angle.js');

module.exports = {
  ObstaclesInfo: ObstaclesInfo,
  BallInfo: BallInfo,
  WorldModelInfo: WorldModelInfo,
  MotorInfo: MotorInfo,
  PPoint: PPoint,
  StrategyInfo: StrategyInfo,
  Point2d: Point2d,
  RobotInfo: RobotInfo,
  PassCommands: PassCommands,
  Point3d: Point3d,
  simulation_strategy: simulation_strategy,
  OminiVisionInfo: OminiVisionInfo,
  VelCmd: VelCmd,
  BallInfo3d: BallInfo3d,
  MotionCmd: MotionCmd,
  CoachInfo: CoachInfo,
  TargetInfo: TargetInfo,
  FrontBallInfo: FrontBallInfo,
  OdoInfo: OdoInfo,
  currentCmd: currentCmd,
  Angle: Angle,
};
