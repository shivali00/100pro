#include<stdio.h>
int main()
{
int n;
printf("Enter value of n for square matrix:");
scanf("%d",&n);
int a[n][n],i,j;
for(i=0;i<n;i++)
for(j=0;j<n;j++)scanf("%d",&a[i][j]);
for(i=0;i<n;i++)
for(j=i+1;j<n;j++)a[i][j]=0;
 for(i=0;i<n;i++)
{
for(j=0;j<n;j++)printf("%d ",a[i][j]); 
printf("\n");
}
return 0;
}