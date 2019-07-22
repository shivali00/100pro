#include<stdio.h>
#include<malloc.h>
int main()
{
int r,a[51],i,j;
printf("Enter number of elements you want(n<50):");
scanf("%d",&r);
for(i=0;i<r;i++)scanf("%d",&a[i]);
printf("Enter index of element you want to remove:");
scanf("%d",&i);
if(i<0) return 0;
if(i>r) return 0;
for(j=i-1;j<r;j++)
{
a[j]=a[j+1];
}
for(j=0;j<r-1;j++)printf("%d  ",a[j]);
return 0;
}