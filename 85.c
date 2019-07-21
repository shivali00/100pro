#include<stdio.h>
#include<malloc.h>
int main()
{
int r,*x,i,j;
printf("Enter number of elements you want:");
scanf("%d",&r);
x=(int*)malloc(4*r);
for(i=0;i<r;i++)scanf("%d",&x[i]);
int b[r],c=0;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(x[i]==b[j]) break;
}
if(j==c)
{
b[c]=x[i];
c++;
}
}
for(j=0;j<c;j++)printf("%d  ",b[j]);
return 0;
}