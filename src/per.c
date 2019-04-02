#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "foo.h"
float per(char figure[10], float x1, float y1, float x2, float y2, float x3,
	  float y3, float x4, float y4) {
	float p;
	if (strcmp(figure, "circle") == 0) {
		p = 2 * x2 * 3.1415;
	} else {
		float AB, BC, AC;
		AB = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y1 - y1));
		BC = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
		AC = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
		p = AB + BC + AC;
	}
	return p;
}
