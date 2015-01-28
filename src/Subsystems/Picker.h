#ifndef PICKER_H
#define PICKER_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Picker: public Subsystem
{
private:
	Talon* PickerEngine;
public:
	Picker();
	void InitDefaultCommand();
	void SetPos(float speed);
};

#endif
