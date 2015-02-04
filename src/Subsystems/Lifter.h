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
	void InitDefaultCommand();
	Encoder *e;
	void SetHeight(float speed);
};

#endif
