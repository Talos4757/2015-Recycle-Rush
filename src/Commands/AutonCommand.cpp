#include <Commands/AutonCommand.h>
#include "AutoShakshuka/AutoDrive.h"
#include "AutoShakshuka/AutoLiftSetter.h"
#include "AutoShakshuka/AutoGripSetter.h"

#define LIFT_SPEED 0.3f
#define GRIP_SPEED 0.3f

AutonCommand::AutonCommand()
{
	AddSequential(new AutoGripSetter(GRIP_SPEED,0));
	AddSequential(new AutoLiftSetter(LIFT_SPEED,0));

	AddSequential(new AutoDrive(0));

	AddSequential(new AutoGripSetter(GRIP_SPEED,1));
	AddSequential(new AutoLiftSetter(LIFT_SPEED,1));
	AddSequential(new AutoGripSetter(GRIP_SPEED,2));
	AddSequential(new AutoLiftSetter(LIFT_SPEED,2));

	AddParallel(new AutoGripSetter(GRIP_SPEED,3));

	AddSequential(new AutoDrive(1));
}

void AutonCommand::Initialize()
{
}

void AutonCommand::Execute()
{

}

bool AutonCommand::IsFinished()
{
	return false;
}

void AutonCommand::End()
{

}

void AutonCommand::Interrupted()
{
	End();
}
