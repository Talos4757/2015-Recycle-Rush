#include "Helper.h"
#include <math.h>

float Helper::ReMap(ValueRange original, ValueRange destination, float value){
	value -= original.min;
	value /= (original.max - original.min);
	value *= (destination.max - destination.min);
	value += destination.min;
	return value;
}

float Helper::IncreaseSpeed(float speed,int hezka){
	if(speed>0 || hezka%2 == 1)
		return pow(speed,hezka);
	else
		return -pow(speed,hezka);
}
