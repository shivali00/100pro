#include<stdio.h>
int main()
{
int a,b,sub;
printf("Enter two numbers:");
scanf("%d %d",&a,&b);
sub=a+~b+1;
printf("Difference is:%d",sub);
return 0;
}