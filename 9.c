#include<stdio.h>
int main()
{
int n;
printf("Enter a number:");
scanf("%d",&n);
int y;
y=2;
while(y<=n/2)
{
if(n%y==0)
{
printf("%d is not a prime number.",n);
return 0;
}
y++;
}
printf("%d is a prime number.",n);
return 0;
}