#include "foo.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

int main()
{
    int n, k, i;
    printf("enter the number of figures=");
    scanf("%d", &n);
    struct fig m[n];
    for (i = 0; i < n; i++) {
        m[i].nom = i + 1;
        scanf("%s (%f %f,%f %f,%f %f,%f %f)",
              m[i].figure,
              &m[i].x1,
              &m[i].y1,
              &m[i].x2,
              &m[i].y2,
              &m[i].x3,
              &m[i].y3,
              &m[i].x4,
              &m[i].y4);
    }
    for (i = 0; i < n; i++) {
        if (strcmp(m[i].figure, "circle") == 0) {
            if (m[i].x2 <= 0)
                printf("Circle does not exist");
        } else {
            if ((m[i].x1 != m[i].x4) || (m[i].y1 != m[i].y4))
                printf("Invalid vertex coordinates");
            float AB, BC, AC;
            AB
                    = sqrt((m[i].x2 - m[i].x1) * (m[i].x2 - m[i].x1)
                           + (m[i].y2 - m[i].y1) * (m[i].y2 - m[i].y1));
            BC
                    = sqrt((m[i].x3 - m[i].x2) * (m[i].x3 - m[i].x2)
                           + (m[i].y3 - m[i].y2) * (m[i].y3 - m[i].y2));
            AC
                    = sqrt((m[i].x3 - m[i].x1) * (m[i].x3 - m[i].x1)
                           + (m[i].y3 - m[i].y1) * (m[i].y3 - m[i].y1));
            if ((AB > (BC + AC)) || (BC > (AB + AC)) || (AC > (BC + AB)))
                printf("Triangle does not exist");
        }
    }
    for (i = 0; i < n; i++) {
        m[i].per
                = per(m[i].figure,
                      m[i].x1,
                      m[i].y1,
                      m[i].x2,
                      m[i].y2,
                      m[i].x3,
                      m[i].y3,
                      m[i].x4,
                      m[i].y4);
        m[i].plo
                = plo(m[i].figure,
                      m[i].x1,
                      m[i].y1,
                      m[i].x2,
                      m[i].y2,
                      m[i].x3,
                      m[i].y3,
                      m[i].x4,
                      m[i].y4);
        if (strcmp(m[i].figure, "circle") == 0) {
            for (j = i + 1; j < n; j++) {if (strcmp(m[i].figure, "circle") {
                    k
                            = peres(1,
                                    m[i].x1,
                                    m[i].y1,
                                    m[i].x2,
                                    m[j].x1,
                                    m[j].y1,
                                    m[j].x2,
                                    0,
                                    0,
                                    0);
                    if (k) {
                        m[i].r = m[j].nom;
                        m[j].r = m[i].nom;
                    }
}
else{
                    k
                            = peres(2,
                                    m[i].x1,
                                    m[i].y1,
                                    m[i].x2,
                                    m[j].x1,
                                    m[j].y1,
                                    m[j].x2,
                                    m[j].y2,
                                    m[j].x3,
                                    m[j].y3, );
                    if (k) {
                        m[i].r = m[j].nom;
                        m[j].r = m[i].nom;
                    }

            }
            }
        }
        for (i = 0; i < n; i++) {
            if (strcmp(m[i].figure, "circle") == 0)
                printf("\n %d.%s(%.2f %.2f,%.2f)\n perimeter=%.2f\n "
                       "area=%.2f",
                       m[i].nom,
                       m[i].figure,
                       m[i].x1,
                       m[i].y1,
                       m[i].x2,
                       m[i].per,
                       m[i].plo);
            else
                printf("\n %d.%s(%.2f %.2f,%.2f %.2f,%.2f %.2f,%.2f "
                       "%.2f)\n perimeter=%.2f\n area=%.2f",
                       m[i].nom,
                       m[i].figure,
                       m[i].x1,
                       m[i].y1,
                       m[i].x2,
                       m[i].y2,
                       m[i].x3,
                       m[i].y3,
                       m[i].x4,
                       m[i].y4,
                       m[i].per,
                       m[i].plo);
            if (m[i].r != 0)
                printf("\n peresechenie:%.0F", m[i].r);
        }

        return 0;
    }
