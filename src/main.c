#include "fc.h"
#include "ft.h"

int main()
{
    FILE* in = fopen("input.txt", "r");
    if (in == NULL) {
        printf("Cannot open file.\nPlease create a file input.txt and write "
               "the data "
               "there.");
        return -1;
    }
    char* str = (char*)malloc(80 * sizeof(char));
    char circle[] = "circle";
    char triangle[] = "triangle";
    int fig = 1;
    printf("Enter a figure. For instance, circle(2 3,6). After entering the "
           "figures write the 7\n");

    fgets(str, 80, in);
    if (strncmp(str, circle, 6) != 0 && strncmp(str, triangle, 8) != 0) {
        printf("Incorrect input\n");
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

    fclose(in);
    return 0;
}
