#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int sum=1;
int z=2;
while(z<=n/2)
{
if(n%z==0)sum+=z;
z++;
}
if(sum==n)
printf(" Perfect number :%d",sum);
else 
printf(" %d is not a Perfect number.",n);
return 0;
}