#include<stdio.h>
int main()
{
FILE *p=fopen("abc.txt","r");
if(!p){return 0;}
fseek(p,0,SEEK_END);
int i=0,cnt;
cnt=ftell(p);
while(i<cnt)
{
i++;
fseek(p,-i,SEEK_END);
printf("%c",fgetc(p));
}
fclose(p);
return 0;
}