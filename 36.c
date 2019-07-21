#include<stdio.h>
int stringLength(char *p)
{
int len;
for(len=0;*p!='\0';len++,p++);
return len;
}
int main()
{
char a[100];
gets(a);
printf("%d",stringLength(a));
return 0;
}