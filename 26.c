#include<stdio.h>
int main()
{
int a[10],n=10;
printf("Enter 10 numbers:");
for(int i=0;i<n;i++)scanf("%d",&a[i]);
int s,l;
s=a[0];
l=a[1];
if(s>l){s=a[1];l=a[0];}
int i=2;
while(i<n)
{
if(a[i]>l)
{
l=a[i];
}
if(a[i]<s) s=a[i];
i++;
}
printf("%d %d",s,l);
return 0;
}