#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
char str[80];
char circle[] = "circle";
char strx[80];
char stry[80];
char strr[80];
int f=0;
int p=0;
char * n;
int i,x,y,r=0,k=0,j=0,l=0,u=0,fig=1;
printf("Enter a figure. For instance, circle(2 3,6). After entering the figures write the 7\n");
while (1) {
fgets(str, 80, stdin);
if (str[0] == '7') break;
if (strncmp(str, circle, 6)) {
printf("Incorrect input\n");
continue;
}
if (!(strncmp( str, circle, 6))) {
printf("%d figure:",fig);
fig++;
printf("circle\n");
i = 0;
while (!('0' <= str[i] && str[i] <= '9' || str[i]=='-')) {
j = i;//j+1 = начало x
i++;
}
for (i = j + 1; str[i] != '\0'; i++)
strx[i - j - 1] = str[i];
x= atof(strx);
for (i = 0; str[i] != ','; i++)
k = i;// str[k+1] = ','
i = k + 1;
while (!('0' <= str[i] && str[i] <= '9' || str[i] == '-')) {
l = i;//l+1 = начало r
i++;
}
for (i = l + 1; str[i] != '\0'; i++)
strr[i - l - 1] = str[i];
r = atof(strr);
i = k + 1;
while (!('0' <= str[i] && str[i] <= '9')) {
p = i;//p-1 = конец последней цифры у
i--;
}
for (i = p - 1; str[i] != ' '; i--)
u = i;// u первая цифра у
for (i = u; str[i] != '\0'; i++)
stry[i - u] = str[i];
y = atof(stry);
printf("Coord: %d %d\n", x,y);
printf("Radius: %d\n",r);
printf("Area: %.4f\n", 3.14*r*r);
printf("Circumference: %.4f\n\n", 2*3.14 * r);
}

}
return 0;
}
