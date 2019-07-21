#include<stdio.h>
void swap(int *c,int *d)
{
int g;
g=*c;
*c=*d;
*d=g;
}
int main()
{
int a,b;
printf("Enter two number:");
scanf("%d %d",&a,&b);
swap(&a,&b);
printf("a=%d\tb=%d",a,b);
return 0;
}