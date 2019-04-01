#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "foo.h"
struct fig {
	int nom;
	char figure[10];
	float cx;
	float cy;
	float r;
	float x1;
	float y1;
	float x2;
	float y2;
	float x3;
	float y3;
	float x4;
	float y4;
	float per;
	float plo;
} f;

int main() {
	int n, i;
	printf("enter the number of figures=");
	scanf("%d", &n);
	struct fig m[n];
	for (i = 0; i < n; i++) {
		m[i].nom = i + 1;
		scanf("%s (%f %f,%f %f,%f %f,%f %f)", &m[i].figure, &m[i].x1,
		      &m[i].y1, &m[i].x2, &m[i].y2, &m[i].x3, &m[i].y3,
		      &m[i].x4, &m[i].y4);
	}
	for (i = 0; i < n; i++) {
		m[i].per = per(m[i].figure, m[i].x1, m[i].y1, m[i].x2, m[i].y2,
			       m[i].x3, m[i].y3, m[i].x4, m[i].y4);
		m[i].plo = plo(m[i].figure, m[i].x1, m[i].y1, m[i].x2, m[i].y2,
			       m[i].x3, m[i].y3, m[i].x4, m[i].y4);
	}
	for (i = 0; i < n; i++) {
		if (strcmp(m[i].figure, "circle") == 0)
			printf(
			    "\n %d.%s(%.2f %.2f,%.2f)\n perimeter=%.2f\n "
			    "area=%.2f",
			    m[i].nom, m[i].figure, m[i].x1, m[i].y1, m[i].x2,
			    m[i].per, m[i].plo);
		else
			printf(
			    "\n %d.%s(%.2f %.2f,%.2f %.2f,%.2f %.2f,%.2f "
			    "%.2f)\n perimeter=%.2f\n area=%.2f",
			    m[i].nom, m[i].figure, m[i].x1, m[i].y1, m[i].x2,
			    m[i].y2, m[i].x3, m[i].y3, m[i].x4, m[i].y4,
			    m[i].per, m[i].plo);
	}

	return 0;
}
