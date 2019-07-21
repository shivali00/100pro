#include<stdio.h>
#include<malloc.h>
int main()
{
int r,*x,i;
printf("Enter number of elements you want:");
scanf("%d",&r);
x=(int*)malloc(4*r);
for(i=0;i<r;i++)scanf("%d",&x[i]);
int ss,s;
s=x[0];
ss=0;
for(i=1;i<r;i++)
{
if(x[i]<s){ss=s;s=x[i];}

}
printf("second smallest : %d",ss);
return 0;
}