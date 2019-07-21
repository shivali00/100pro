#include<stdio.h>
int fact(int n)
{
int y=1,i;
for(i=n;i>1;i--)y*=i;
return y;
}
int main()
{
int n,sum,num;
printf("Enter  number:");
scanf("%d",&n);
sum=0;
num=n;
while(num!=0)
{sum+=fact(num%10);
num/=10;}
if(sum==n)printf("%d is a strong number",n);
else printf("%d is not a strong number",n);
return 0;
}