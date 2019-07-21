#include<stdio.h>
int main()
{
int a[10];
for(int i=0;i<10;i++)
scanf("%d",&a[i]);
int l,sl;
l=a[0];
sl=0;
int i=1;
while(i<10)
{
if(a[i]>l){sl=l;l=a[i];}

i++;
}
printf("l=%d   sl=%d",l,sl);
return 0;
}