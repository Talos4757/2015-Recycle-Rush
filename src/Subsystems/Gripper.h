/*
 * Gripper.h
 *
 *  Created on: 7 αταψ 2015
 *      Author: User
 */

#ifndef GRIPPER_H_
#define GRIPPER_H_

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Gripper : public Subsystem
{
private:
	Talon *GripperMotor;
	DigitalInput *open, *close;
public:
	Gripper();
	void InitDefaultCommand();
	Talon* GetGripperMotor();
	bool IsFullyClosed();
	bool IsFullyOpened();
};

#endif /* GRIPPER_H_ */
