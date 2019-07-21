#include<stdio.h>
void changeCase(char *a)
{
while(*a)
{
if(*a>=97 && *a<=122)*a-=32;
else *a+=32;
a++;
}
}
int main()
{
char a[20];
gets(a);
changeCase(a);
printf("%s",a);
return 0;
}