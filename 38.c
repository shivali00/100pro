#include<stdio.h>
int fact(int n,int r)
{
int z=n,y=1;
for(int i=1;i<r;i++,z--)y=y*z;
printf("%d\n",z);
return z;
}
int main()
{
int n,r;
printf("Enter n and r");
scanf("%d %d",&n,&r);
if(r>n/2)r=n-r;
printf("r=%d\n",r);
int result=fact(n,r);
printf("nCr value is %d",result);
return 0;
}