#include<stdio.h>
int main()
{
int n;
printf("Enter a number:");
scanf("%d",&n);
if(n<0) return 0;
int i=0;
while(n!=0)
{
i+=n%10;
n/=10;
}
printf("Sum of digits:%d",i);
return 0;
}