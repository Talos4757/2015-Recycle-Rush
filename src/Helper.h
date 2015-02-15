#ifndef HELPER_H
#define HELPER_H

typedef struct range{
	float min;
	float max;

public:
	range(float min, float max){
		this->min = min;
		this->max = max;
	}
} ValueRange;

class Helper{
public:
	static float ReMap(ValueRange original, ValueRange destination, float value);
};

#endif
