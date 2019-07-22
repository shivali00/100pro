#include<stdio.h>
#include<malloc.h>
int main()
{
int r,a[51],i,j,num;
printf("Enter number of elements you want(n<50):");
scanf("%d",&r);
for(i=0;i<r;i++)scanf("%d",&a[i]);
printf("Enter index and element you want to add:");
scanf("%d %d",&i,&num);
if(i<0) return 0;
if(i>r) return 0;
for(j=r;j>=i;j--)
{
a[j]=a[j-1];
}
a[i-1]=num;
for(j=0;j<r+1;j++)printf("%d  ",a[j]);
return 0;
}