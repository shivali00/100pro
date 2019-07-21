#include<stdio.h>
int main()
{
int n;
printf("Enter value of n for square matrix:");
scanf("%d",&n);
int a[n][n],i,j,sum=0;
for(i=0;i<n;i++)
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
if(i==j)sum+=a[i][i];
}
printf("Sum of diagonal elements: %d",sum);


return 0;
}