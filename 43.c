#include<stdio.h>
#include<stdlib.h>
int main()
{
int n;
printf("Enter n:");
scanf("%d",&n);
int a[n][n],i,j;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
}
i=0;
while(i<n)
{
for(j=i+1;j<n;j++)
{
if(i==j)continue;
if(a[i][j]!=a[j][i]){printf("Not a symmetric matrix");exit(1);}
}
i++;
}
printf("Symmetric matrix");
return 0;
}
