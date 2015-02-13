#ifndef LIFT_H_
#define LIFT_H_

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Lift : public Subsystem
{
private:
	Talon *LiftMotor;
	DigitalInput *UpLimit, *BottomLimit;
	Encoder *LiftEncoder;
public:
	Lift();
	void InitDefaultCommand();
	bool IsTopmost();
	bool IsDownmost();
	float GetHeight();
	Talon *GetLiftMotor();
	Encoder *GetLiftEncoder();
};

#endif /* LIFT_H_ */
