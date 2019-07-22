#include<stdio.h>
int partition(int a[],int lb,int ub)
{
int g,e,f,num;
e=lb;
f=ub;
num=a[lb];
while(1)
{
for(;a[e]<=a[lb] && e!=ub;e++);
for(;a[f]>a[lb] &&f>lb;f--);
if(e<f)
{
g=a[e];
a[e]=a[f];
a[f]=g;
}
else
{
g=a[lb];
a[lb]=a[f];
a[f]=g;
break;
}
}
return f;
}
void quickSort(int a[],int lb,int ub)
{
if(ub<=lb)return ;
int p=partition(a,lb,ub);
quickSort(a,lb,p-1);
quickSort(a,p+1,ub);
}
int main()
{
int x[10],y;
for(y=0;y<=9;y++)
{
printf("Enter a number : ");
scanf("%d",&x[y]);
}
quickSort(x,0,9);
for(y=0;y<=9;y++)
{
printf("%d\n",x[y]);
}
return 0;
}