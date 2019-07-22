#include<stdio.h>
union aaa
{
	int a;
	char ch;
};
int main()
{

union aaa b;
scanf("%d",&b.a);
scanf("%s",&b.ch);
printf("%d  ",b.a);
printf("%c",b.ch);
return 0;	
}