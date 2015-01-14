#ifndef VAGINA_H
#define VAGINA_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Vagina: public Subsystem
{
private:
	Talon *vaginaRight;
	Talon *vaginaLeft;

public:
	Vagina();
	void InitDefaultCommand();
	void MotorIn(float speed);
	void MotorOut(float speed);
	void RotateRight(float speed);
	void RotateLeft(float speed);
};

#endif
