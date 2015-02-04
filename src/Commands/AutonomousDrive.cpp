#include "AutonomousDrive.h"

AutonomousDrive::AutonomousDrive() {
	Requires(chassis);
}
void AutonomousDrive::Initialize() {
	SetTimeout(2);
}
void AutonomousDrive::Execute() {
	chassis->GetRobotDrive()->ArcadeDrive(1.0f,true);
}
bool AutonomousDrive::IsFinished() {
	return IsTimedOut();
}
void AutonomousDrive::End() {
	Cancel();
}
void AutonomousDrive::Interrupted() {
	End();
}

