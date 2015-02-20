#include <Commands/AutonCommand.h>
#include "WPILib.h"
#include "Commands/Command.h"
#include "CommandBase.h"
class Robot: public IterativeRobot
{
private:
	Command *autonomousCommand;
	LiveWindow *lw;
	Timer *t;

	void RobotInit()
	{
		CommandBase::Init();
		autonomousCommand = NULL;
		lw = LiveWindow::GetInstance();
	}
	
	void DisabledPeriodic()
	{

		Scheduler::GetInstance()->Run();
	}

	void AutonomousInit()
	{
		if (autonomousCommand != NULL)
			autonomousCommand->Start();
	}

	void AutonomousPeriodic()
	{
		Scheduler::GetInstance()->Run();
	}

	void TeleopInit()
	{
		// This makes sure that the autonomous stops running when
		// teleop starts running. If you want the autonomous to 
		// continue until interrupted by another command, remove
		// this line or comment it out.
		t= new Timer();
		t->Start();
		if (autonomousCommand != NULL)
			autonomousCommand->Cancel();
	}

	void TeleopPeriodic()
	{
		SmartDashboard::PutString("currentGripCommand",	CommandBase::gripper->GetCurrentCommand()->GetName());
		SmartDashboard::PutNumber("timer",135-t->Get());
		Scheduler::GetInstance()->Run();
	}

	void TestPeriodic()
	{
		lw->Run();
	}
};

START_ROBOT_CLASS(Robot);

