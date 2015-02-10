#include "AutoCommand.h"
#include "AutoShakshuka/AutoDrive.h"
#include "AutoShakshuka/AutoLiftSetter.h"
#include "AutoShakshuka/AutoGripSetter.h"

#define LIFT_SPEED 0.3f
#define GRIP_SPEED 0.3f

AutoCommand::AutoCommand()
{
	AddSequential(new AutoLiftSetter(LIFT_SPEED,0));
	AddSequential(new AutoGripSetter(GRIP_SPEED,0));
	AddSequential(new AutoDrive(0));

	AddParallel(new AutoLiftSetter(LIFT_SPEED,1));
	AddParallel(new AutoGripSetter(GRIP_SPEED,1));

	AddSequential(new AutoDrive(2));
}

void AutoCommand::Initialize()
{
}

void AutoCommand::Execute()
{

}

bool AutoCommand::IsFinished()
{
	return false;
}

void AutoCommand::End()
{

}

void AutoCommand::Interrupted()
{
	End();
}
