#include<stdio.h>
int main()
{
int n;
printf("Enter a number:");
scanf("%d",&n);
int rev,num,z;
num=n;
rev=0;
while(num!=0)
{
z=num%10;
rev=rev*10+z;
num=num/10;
}
printf("Reverse of %d is %d.",n,rev);
return 0;
}