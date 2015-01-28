#include "CommandBase.h"
#include "Subsystems/Chassis.h"
#include "Commands/Scheduler.h"
#include "Subsystems/Lifter.h"
#include "Subsystems/Vagina.h"
// Initialize a single static instance of all of your subsystems to NULL
Chassis* CommandBase::chassis = NULL;
OI* CommandBase::oi = NULL;
Lifter* CommandBase::lifter=NULL;
Vagina* CommandBase::vagina=NULL;
Picker* CommandBase::picker=NULL;
CommandBase::CommandBase(char const *name) :
		Command(name)
{
}

CommandBase::CommandBase() :
		Command()
{

}

void CommandBase::init()
{
	// Create a single static instance of all of your subsystems. The following
	// line should be repeated for each subsystem in the project.
	lifter = new Lifter();
	chassis = new Chassis();
	oi = new OI();
	vagina = new Vagina();
	picker=new Picker();
}
