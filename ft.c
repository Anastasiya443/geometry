#include "ft.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ft(char str[80])
{
    float area, pp, per = 0, a, b, c;
    int x1, x2, y1, y2, z1, z2, q1, q2;
    char strx1[80];
    strx1[0] = str[10];
    char stry1[80];
    stry1[0] = str[12];
    char strx2[80];
    strx2[0] = str[14];
    char stry2[80];
    stry2[0] = str[16];
    char strz1[80];
    strz1[0] = str[18];
    char strz2[80];
    strz2[0] = str[20];
    char strq1[80];
    strq1[0] = str[22];
    char strq2[80];
    strq2[0] = str[24];

    x1 = atof(strx1), x2 = atof(stry1), y1 = atof(strx2), y2 = atof(stry2),
    z1 = atof(strz1), z2 = atof(strz2), q1 = atof(strq1), q2 = atof(strq2);
    a = sqrt((x1 - y1) * (x1 - y1) + (x2 - y2) * (x2 - y2));
    b = sqrt((y1 - z1) * (y1 - z1) + (y2 - z2) * (y2 - z2));
    c = sqrt((z1 - q1) * (z1 - q1) + (z2 - q2) * (z2 - q2));
    per = a + b + c;
    pp = per / 2;
    area = sqrt(pp * (pp - a) * (pp - b) * (pp - c));
    printf("triangle\n");
    printf("Coord: (%d %d,%d %d,%d %d,%d %d)\n",
           x1,
           x2,
           y1,
           y2,
           z1,
           z2,
           q1,
           q2);
    printf("Area: %.4f\n", area);
    printf("Perimeter: %.4f\n\n", per);
}
