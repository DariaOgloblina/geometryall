#include "foo.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int peres(
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
{ float r;
int flag=0;
    switch (k) {
    case 1:
         r = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        if ((r1 + r2 >= r)&& (r1 + r >= r2) && (r2 + r >= r1))
           flag=1;
        break;
    case 2:
       r = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        if (r1 >= r)
            flag=1;
        r = sqrt(pow(r2 - x1, 2) + pow(y22 - y1, 2));
        if (r1 >= r)
            flag=1;
        r = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
if (r1 >= r)
            flag=1;

        break;
    }
if (flag) return 1;
else return 0;
}
