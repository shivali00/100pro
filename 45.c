#include<stdio.h>
#include<stdlib.h>
int main()
{
int e;
int *x;
scanf("%d",&e);
x=(int *)malloc(4*e);
int i=0,sum=0;
for(;i<e;i++){ scanf("%d",&x[i]); sum+=x[i];}
printf("%d",sum);
return 0;
}