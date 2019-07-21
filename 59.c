#include<stdio.h>
int main()
{
FILE *p=fopen("abc.txt","r+");
if(!p){printf("No such file exists");return 0;}
char *a;
fgets(a,ftell(p),p);
printf("%s",a);
char *b="hey this is the new text that i have added in this file";
fputs(b,p);
fgets(a,ftell(p),p);
printf("%s",a);
return 0;
}