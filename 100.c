#include<stdio.h>
int main()
{
int n;
printf("Enter a number:");
scanf("%d",&n);
int num=n,y=1,x,oct=0;
while(num!=0)
{
x=num%8;
oct+=y*x;
num=num/8;
y*=10;
}
printf("Octal of %d : %d",n,oct);
return 0;
}