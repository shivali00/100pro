#include<stdio.h>
int main()
{
char *a[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
int n;
printf("Enter a number:");
scanf("%d",&n);
int num=n;
while(num!=0)
{
printf("%s ",a[num%10]);
num=num/10;
}
return 0;
}