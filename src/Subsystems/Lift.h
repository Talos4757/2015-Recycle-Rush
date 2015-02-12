#ifndef LIFT_H_
#define LIFT_H_

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Lift : public Subsystem
{
private:
	Talon *LiftMotor;
	DigitalInput *UpLimit, *BottomLimit;

public:
	Lift();
	void InitDefaultCommand();
	Talon *GetLiftMotor();
	bool IsTopmost();
	bool IsDownmost();
};


#endif /* LIFT_H_ */
