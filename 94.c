#include<stdio.h>
int main()
{
FILE *f=fopen("94.c","r");
char m;
if(f==NULL) return 0;
while(1)
{
m=fgetc(f);
if(feof(f)) break;
printf("%c",m);
}
fclose(f);
return 0;
}