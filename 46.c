#include<stdio.h>
#include<malloc.h>
#include<math.h>
struct Comp
{
int real;
int img;
}a,b;
int main()
{
int ch;
printf("Enter a and b(a+bi):");
scanf("%d %d",&a.real,&a.img);
printf("Enter a and b(a+bi):");
scanf("%d %d",&b.real,&b.img);
printf("1) Add\t2) Sub\t3)Multi:");
scanf("%d",&ch);
if(ch==1)
{
if(b.img>0 && a.img>0)printf("Sum:%d+%di",a.real+b.real,a.img+b.img);
else if((b.img<0 && abs(b.img)>a.img)||(a.img<0 && abs(a.img)>b.img))("Sum:%d %di",a.real+b.real,a.img+b.img);
}
else if(ch==2)
{
}
else if(ch==3)
{
}
else printf("Oops! Wrong choice");
return 0;
}