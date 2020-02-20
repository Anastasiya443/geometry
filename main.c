#include<stdio.h>
#include<string.h>
int main() {
printf("Enter a figure. For instance, circle(2 3,6)");
char str[20];
char circle[] = "circle";

int f=0;
int i,x,y,r,k=0,j;
printf("\n");
gets_s(str);
printf("\n");
printf("\n");

if (!(strncmp( str, circle, 6))) {
f = 1;
x= str[7];
y= str[9];
r= str[11];
}
if (f == 0) printf("Incorrect input\n");

if (f == 1) {
printf("figure:");
printf("circle\n");
printf("Coord:%4c %4c\n", x, y);
printf("Radius:%4c\n", r);
}

return 0;
}
