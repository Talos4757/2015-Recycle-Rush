/*
 * Gripper.h
 *
 *  Created on: 7 αταψ 2015
 *      Author: User
 */

#ifndef LIFT_H_
#define LIFT_H_

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Lift : public Subsystem
{
private:
	Talon *LiftMotor;
	Encoder *e;
public:
	Lift();
	void InitDefaultCommand();
	Talon *GetLiftMotor();
};

#endif /* LIFT_H_ */
