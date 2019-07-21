#include<stdio.h>
int max(int *a,int size)
{
int m=a[0],i;
for(i=1;i<=size-1;i++)if(m<a[i])m=a[i];
return m;
}
int main()
{
int a[10],i;
for(i=0;i<10;i++)scanf("%d",&a[i]);
printf("max:%d",max(a,10));
return 0;
}