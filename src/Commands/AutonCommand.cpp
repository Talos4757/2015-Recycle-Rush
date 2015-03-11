#include <Commands/AutonCommand.h>
#include "AutoShakshuka/AutoDrive.h"
#include "AutoShakshuka/AutoLiftSetter.h"
#include "AutoShakshuka/AutoGripSetter.h"
#include "OpenClose.h"
#include"AutoDown.h"
//#define LIFT_SPEED 0.3f
//#define GRIP_SPEED 0.3f
#define SPEED -1.0f
#define FIRST_LIFT_TIME 0.05f
#define FIRST_GRIP_TIME 0.5f
#define SECOND_LIFT_TIME 0.5f
#define DRIVING_TIME 2.0f
AutonCommand::AutonCommand()
{
	AddSequential(new AutoDown());
	AddSequential(new AutoLiftSetter(SPEED/2,FIRST_LIFT_TIME));
	AddSequential(new WaitCommand(1.5));
	AddSequential(new AutoGripSetter(SPEED,FIRST_GRIP_TIME));
	AddSequential(new WaitCommand(1.5));
	AddSequential(new AutoLiftSetter(SPEED,SECOND_LIFT_TIME));
	AddSequential(new WaitCommand(0.5));
	AddSequential(new OpenClose());
	AddSequential(new AutoDrive(DRIVING_TIME));
}
