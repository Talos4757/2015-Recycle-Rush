#ifndef LIFT_H_
#define LIFT_H_

#include "Commands/Subsystem.h"
#include "WPILib.h"
#include <math.h>

#define RADIUS 3 //Centimeters

class Lift : public Subsystem
{
private:
	Victor *LiftMotor;
	DigitalInput *UpLimit, *BottomLimit;
	Encoder *LiftEncoder;
public:
	Lift();
	void InitDefaultCommand();
	bool IsTopmost();
	bool IsDownmost();
	float GetHeight();
	Victor *GetLiftMotor();
	Encoder *GetLiftEncoder();
};

#endif /* LIFT_H_ */
