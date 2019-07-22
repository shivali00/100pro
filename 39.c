#include<stdio.h>
#include<stdlib.h>
int main()
{
int m,n;
printf("Enter m and n:");
scanf("%d %d",&m,&n);
if(n==0) {printf("%d",m);exit(1);}
int i=1;
do
{
i*=m;
n--;
}while(n!=0);
printf("%d",i);
return 0;
}