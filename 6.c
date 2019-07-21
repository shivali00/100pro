#include<stdio.h>
int fact(int i)
{
if(i==1) return 1;
return i*fact(i-1);
}
int main()
{
int n;
printf("Enter a number:");
scanf("%d",&n);
printf("%d",fact(n));
return 0;
}