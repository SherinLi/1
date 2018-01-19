#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
char str[255]={0};
int numbers = 0, letter_s = 0, letter_p = 0;
gets(str);

int i = 0;
while (i < sizeof(str)) {

if (str[i] >= 'a' && str[i] <= 'z') {
letter_p += 1;
}
else if (str[i] >= 'A' && str[i] <= 'Z') {
letter_s += 1;
}
else if (str[i] >= '0' && str[i] <= '9') {
numbers += 1;
}
i++;
}
printf("%d\n", letter_p);
printf("%d\n", letter_s);
printf("%d\n", numbers);

int n;
char c[255];
scanf("%d", &n);
int v=0;
while (n > 9)
{
c[v++] = (n % 10) + '0';
n = n / 10;
}
c[v++] = n + '0';
c[v] = '\0';
char t;

i = 0;
while (i < v / 2)
{
t = c[i];
c[i] = c[v - 1 - i];
c[v - 1 - i] = t;
i++;
}
v = 0;
while (c[v] != '\0')
printf("%c", c[v++]);
printf("\n");
return 0;
}
