#include<stdio.h>
void bubbleSort(int *x,int size)
{
int e,f,m,g;
m=size-2;
while(m>=0)
{
e=0;
f=1;
while(e<=m)
{
if(x[f]<x[e])
{
g=x[e];
x[e]=x[f];
x[f]=g;
}
e++;
f++;
}
m--;
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
bubbleSort(x,10);
for(y=0;y<=9;y++)
{
printf("%d\n",x[y]);
}
return 0;
}