#include<stdio.h>
int main()
{
int ro,co;
printf("Enter number of rows and columns:");
scanf("%d %d",&ro,&co);
int a[ro][co],b[ro][co],c[ro][co],i,j,k;
printf("Enter 1st mat\n");
for(i=0;i<ro;i++)
{
for(j=0;j<co;j++)
scanf("%d",&a[i][j]);
}
printf("Enter 2nd mat\n");
for(i=0;i<ro;i++)
{
for(j=0;j<co;j++)
scanf("%d",&b[i][j]);
}
for(i=0;i<ro;i++)
{
for(j=0;j<co;j++)
c[i][j]=a[i][j]-b[i][j];
}
for(i=0;i<ro;i++)
{
for(j=0;j<co;j++)
printf("%d\t",c[i][j]);
printf("\n");
}
return 0;
}