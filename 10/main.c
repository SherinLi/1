#include <stdio.h>
#include <math.h>
#include <string.h>


int NOD(int n1,int n2)
{
int div;
if(n1==n2){
	return n1;}
int d = n1 - n2;
if (d<0){
d=-d;
div=NOD(n1,d);
}else
div=NOD(n2,d);
return div;
}

int NOK(int n1,int n2)
{
	return n1*n2/NOD(n1,n2);
}
int main()
{
int n1, n2;
scanf("%d", &n1);
scanf("%d", &n2);
int b = NOD(n1,n2), x = NOK(n1,n2);
printf("%d %d\n", b, x);

int n, i;
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
