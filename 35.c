#include<stdio.h>
void copy(char *p,char *q)
{
for(*q;*q!=0;q++,p++)*p=*q;
*p='\0';
}
int main()
{
char a[100],b[100];
gets(b);
copy(a,b);
printf("%s",a);
return 0;
}