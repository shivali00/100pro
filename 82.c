#include<stdio.h>
#include<malloc.h>
int main()
{
int r,*x,i;
printf("Enter number of elements you want:");
scanf("%d",&r);
x=(int*)malloc(4*r);
for(i=0;i<r;i++)scanf("%d",&x[i]);
int l;
l=x[0];
for(i=1;i<r;i++)
{
if(x[i]>l)l=x[i];

}
printf("largest : %d",l);
return 0;
}