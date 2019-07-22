#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c;
printf("enter a, b ,c(ax^2+bx+c):");
scanf("%d %d %d",&a,&b,&c);
double d=(b*b)-(4*a*c);
d=pow(d,-2);
double x=0,y=0;
x=(-b+d)/2*a;
y=(-b-d)/2*a;
printf("%d %d",x,y);
return 0;
}