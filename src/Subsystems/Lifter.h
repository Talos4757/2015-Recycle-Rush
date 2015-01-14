#ifndef LIFTER_H
#define LIFTER_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Lifter: public Subsystem
{
private:
	Talon* LiftEngine;
public:
	Lifter();
	void SetHeight(float speed);
	void InitDefaultCommand();
};

#endif
