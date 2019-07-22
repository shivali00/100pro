#include<stdio.h>
int fact(int n)
{
if(n==0 || n==1) return 1;
int k=1;
for(int i=n;i>1;i--)k=k*i;
return k;
}
int main()
{
int n;
printf("Enter level:");
scanf("%d",&n);
int j,nosp=n-1,i=0;
while(i<n)
{
for(j=nosp;j>0;j--)printf(" ");
for(j=0;j<=i;j++)printf("%d ",fact(i)/(fact(j)*fact(i-j)));
printf("\n");
i++;
nosp--;
}
return 0;
}