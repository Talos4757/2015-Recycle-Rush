#ifndef ROBOTMAP_H
#define ROBOTMAP_H

#include "WPILib.h"

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
 
// For example to map the left and right motors, you could define the
// following variables to use with your drivetrain subsystem.
//const int LEFTMOTOR = 1;
//const int RIGHTMOTOR = 2;

// If you are using multiple modules, make sure to define both the port
// number and the module. For example you with a rangefinder:
//const int RANGE_FINDER_PORT = 1;
//const int RANGE_FINDER_MODULE = 1;

//change this to real values
#define FRONT_LEFT_MOTOR 1
#define FRONT_RIGHT_MOTOR 2
#define REAR_LEFT_MOTOR 3
#define REAR_RIGHT_MOTOR 4
#define MIDDLE_MOTOR 5
#define LIFT_ENGINE 6
#define VAGINA_MOTOR_RIGHT 7
#define VAGINA_MOTOR_LEFT 8

#endif
