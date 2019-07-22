#include<stdio.h>
int main()
{
char a[25],g;
gets(a);
int i=0,f,m;
while(a[i+1]!=0)
{
m=i;
f=i+1;
while(a[f]!=0)
{
if(a[m]>a[f])m=f;
f++;
}
g=a[i];
a[i]=a[m];
a[m]=g;
i++;
}
printf("%s",a);
return 0;
}