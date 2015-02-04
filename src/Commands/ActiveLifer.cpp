#include "ActiveLifer.h"

ActiveLifer::ActiveLifer() {
	Requires(lifter);
}
void ActiveLifer::Initialize() {
	SetTimeout(2);
}
void ActiveLifer::Execute() {
	lifter->SetHeight(1.0f);
}
bool ActiveLifer::IsFinished() {
	return IsTimedOut();
}
void ActiveLifer::End() {
	Cancel();
}
void ActiveLifer::Interrupted() {
	End();
}

