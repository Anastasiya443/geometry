#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fc.h"
#include "ft.h"

int main()
{
    char str[80];
    char circle[] = "circle";
    char triangle[] = "triangle";
    int fig = 1;
    printf("Enter a figure. For instance, circle(2 3,6). After entering the "
           "figures write the 7\n");
    while (1) {
        fgets(str, 80, stdin);
        if (str[0] == '7')
            break;
        if (strncmp(str, circle, 6) != 0 && strncmp(str, triangle, 8) != 0) {
            printf("Incorrect input\n");
            continue;
        }
        if (!(strncmp(str, circle, 6))) {
            printf("%d figure:", fig);
            fig++;
            fc(str);
        }

        if (strncmp(str, triangle, 8) == 0) {
            printf("%d figure:", fig);
            fig++;
            ft(str);
        }
    }
    return 0;
}
