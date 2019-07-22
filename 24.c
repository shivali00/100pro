#include<stdio.h>
void insertionSort(int *x,int lb,int ub)
{
int p,j,num,y;
y=lb+1;
while(y<=ub)
{
p=y;
num=x[p];
j=p-1;
while(j>=lb)
{
if(num>=x[j])
{
break;
}
x[j+1]=x[j];
j--;
p--;
}
x[p]=num;
y++;
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
insertionSort(x,0,9);
for(y=0;y<=9;y++)
{
printf("%d\n",x[y]);
}
return 0;
}