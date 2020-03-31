#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[80];
    char circle[] = "circle";
    char triangle[] = "triangle";
    char strx[80];
    char stry[80];
    char strr[80];
    int f = 0;
    int p = 0;
    char* n;
    int i, x, y, r = 0, k = 0, j = 0, l = 0, u = 0, fig = 1;
    printf("Enter a figure. For instance, circle(2 3,6). After entering the "
           "figures write the 7\n");
    while (1) {
        fgets(str, 80, stdin);
        if (str[0] == '7')
            break;
        if (strncmp(str, circle, 6) == 1 && strncmp(str, triangle, 8) == 1) {
            printf("Incorrect input\n");
            continue;
        }
        if (!(strncmp(str, circle, 6))) {
            i = 0;
            while (!('0' <= str[i] && str[i] <= '9' || str[i] == '-')) {
                j = i; // j+1 = начало x
                i++;
            }
            for (i = j + 1; str[i] != '\0'; i++)
                strx[i - j - 1] = str[i];
            x = atof(strx);
            for (i = 0; str[i] != ','; i++)
                k = i; // str[k+1] = ','
            i = k + 1;
            while (!('0' <= str[i] && str[i] <= '9' || str[i] == '-')) {
                l = i; // l+1 = начало r
                i++;
            }
            for (i = l + 1; str[i] != '\0'; i++)
                strr[i - l - 1] = str[i];
            r = atof(strr);
            if (r <= 0) {
                printf("Incorrect input\n");

                continue;
            }
            i = k + 1;
            while (!('0' <= str[i] && str[i] <= '9')) {
                p = i; // p-1 = конец последней цифры у
                i--;
            }
            for (i = p - 1; str[i] != ' '; i--)
                u = i; // u первая цифра у
            for (i = u; str[i] != '\0'; i++)
                stry[i - u] = str[i];
            y = atof(stry);
            printf("%d figure:", fig);
            fig++;
            printf("circle\n");
            printf("Coord: %d %d\n", x, y);
            printf("Radius: %d\n", r);
            printf("Area: %.4f\n", 3.14 * r * r);
            printf("Circumference: %.4f\n\n", 2 * 3.14 * r);
        }

        if (strncmp(str, triangle, 8) == 0) {
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

            x1 = atof(strx1), x2 = atof(stry1), y1 = atof(strx2),
            y2 = atof(stry2), z1 = atof(strz1), z2 = atof(strz2),
            q1 = atof(strq1), q2 = atof(strq2);
            a = sqrt((x1 - y1) * (x1 - y1) + (x2 - y2) * (x2 - y2));
            b = sqrt((y1 - z1) * (y1 - z1) + (y2 - z2) * (y2 - z2));
            c = sqrt((z1 - q1) * (z1 - q1) + (z2 - q2) * (z2 - q2));
            per = a + b + c;
            pp = per / 2;
            area = sqrt(pp * (pp - a) * (pp - b) * (pp - c));
            printf("%d figure:", fig);
            fig++;
            printf("triangle\n");
            printf("Coord: %d %d %d %d %d %d %d %d\n",
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
    }
    return 0;
}
