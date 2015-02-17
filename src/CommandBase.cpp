#include "CommandBase.h"

OI* CommandBase::oi = NULL;
Chassis* CommandBase::chassis = NULL;
Lift* CommandBase::lift=NULL;
Gripper* CommandBase::gripper=NULL;

/*CommandBase::CommandBase(char const *name) : Command(name)
{


}*/

CommandBase::CommandBase() :Command()
{
}

void CommandBase::Init()
{
	lift = new Lift();
	chassis = new Chassis();
	gripper =new Gripper();
	oi = new OI(); //MUST BE LAST
}
