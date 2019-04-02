#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "foo.h"
float plo(char figure[10], float x1, float y1, float x2, float y2, float x3,
	  float y3, float x4, float y4) {
	float s;
	if (strcmp(figure, "circle") == 0) {
		s = x2 * x2 * 3.1415;
	} else {
		s = fabs((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1)) / 2.0;
	}
	return s;
}
