#include "foo.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
float peres(
        int k,
        float x1,
        float y1,
        float r1,
        float x2,
        float y2,
        float r2,
        float y22,
        float x3,
        float y3)
{
    switch (k) {
    case 1:
        double r = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        if (r1 + r2 >= r && r1 + r >= r2 && r2 + r >= r1)
            return 1;
        else
            return 0;
        break;
    case 2:
        double r = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        if (r1 >= r)
            return 1;
        r = sqrt(pow(r2 - x1, 2) + pow(y22 - y1, 2));
        if (r1 >= r)
            return 1;
        r = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));

        else return 0;
        break;
    }
}
