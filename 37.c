#include<stdio.h>
int main()
{
int n,i;
double x=1.0,sum=0.0;
printf("Enter n:");
scanf("%d",&n);
i=0;
while(i<n)
{
sum+=x;
x/=2;
i++;
}
printf("%f",sum);
return 0;
}