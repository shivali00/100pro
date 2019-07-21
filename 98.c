#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
int n;
printf("Enter a number octal number:");
scanf("%d",&n);
int num=n,y=0,x,m=0,i=0;
while(num!=0)
{
x=num%10;
m+=x*pow(8,y);
num=num/10;
y++;
}
char hex[17];
num=m;
while(num!=0)
{
x=num%16;
if(x<=9) hex[i++]=48+x;
else hex[i++]=65+x-10;
num=num/16;
}
hex[i]=0;
printf("hexa decimal :%s",strrev(hex));
return 0;
}