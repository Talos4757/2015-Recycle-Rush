#ifndef VAGINA_ROTATE_H
#define VAGINA_ROTATE_H

#include "../CommandBase.h"
#include "WPILib.h"

#define SPEED 0.2

enum Direction {
	Right , Left , In , Out , Idle
};
class VaginaRotate: public CommandBase
{
private:
	Direction dir;
public:
	VaginaRotate(Direction dir);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
