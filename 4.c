#include<stdio.h>
int main()
{
int n,z;
printf("Enter the limit:");
scanf("%d",&n);
printf("0 \n1\n");
for(int i=0,x=0,y=1;i<n-2;i++)
{
z=x+y;
printf("%d\n",z);
x=y;
y=z;
} 

return 0;
}