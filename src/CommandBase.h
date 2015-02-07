#ifndef COMMAND_BASE_H
#define COMMAND_BASE_H

#include <string>
#include "Commands/Command.h"
#include "Commands/Scheduler.h"
#include "OI.h"
#include "WPILib.h"

#include "Subsystems/Chassis.h"
#include "Subsystems/Lift.h"
#include "Subsystems/Gripper.h"

class CommandBase: public Command
{
public:
	CommandBase(char const *name);
	CommandBase();

	static void Init();

	static Lift *lift;
	static Chassis *chassis;
	static Gripper *gripper;
	static OI *oi;


};

#endif
