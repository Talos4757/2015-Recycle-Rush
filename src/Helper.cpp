#include "Helper.h"

float Helper::ReMap(ValueRange original, ValueRange destination, float value){
	value -= original.min;
	value /= (original.max - original.min);
	value *= (destination.max - destination.min);
}
