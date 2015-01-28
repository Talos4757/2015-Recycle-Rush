#ifndef PICKER_POS_H
#define PICKER_POS_H

#include "../CommandBase.h"
#include "WPILib.h"

class PickerPos: public CommandBase
{
public:
	float speed;
	PickerPos(float speed);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
