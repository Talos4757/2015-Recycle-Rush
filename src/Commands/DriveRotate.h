#ifndef DRIVEROTATE_H
#define DRIVEROTATE_H
#include "WPILib.h"
#include "../CommandBase.h"


class DriveRotate: public CommandBase {
public:
	DriveRotate();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
