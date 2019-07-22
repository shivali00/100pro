#include<stdio.h>
void selectionSort(int *x,int size)
{
int e,f,m,g;
e=0;
while(e<=size-2)
{
m=e;
f=e+1;
while(f<=size-1)
{
if(x[f]<x[m])
{
m=f;
}
f++;
}
g=x[e];
x[e]=x[m];
x[m]=g;
e++;
}
}
int main()
{
int x[10],y;
for(y=0;y<=9;y++)
{
printf("Enter a number : ");
scanf("%d",&x[y]);
}
selectionSort(x,10);
for(y=0;y<=9;y++)
{
printf("%d\n",x[y]);
}
return 0;
}