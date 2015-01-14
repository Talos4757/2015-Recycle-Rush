#ifndef HEIGHT_SETTER_H
#define HEIGHT_SETTER_H

#include "../CommandBase.h"
#include "WPILib.h"

class HeightSetter: public CommandBase
{
public:
	float speed;
	HeightSetter(float speed);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
