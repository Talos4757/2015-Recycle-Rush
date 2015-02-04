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
#define RIGHT_MOTOR 0
#define LEFT_MOTOR 1

#define MIDDLE_MOTOR_FRONT 2
#define MIDDLE_MOTOR_REAR 3

#define ENCODER_FIRST 1
#define ENCODER_SECOND 2

#define LIFT_ENGINE 4

#define VAGINA_MOTOR_RIGHT 5
#define VAGINA_MOTOR_LEFT 6
#define PICK_ENGINE 7

#endif
