#include<stdio.h>
int main()
{
FILE *p=fopen("abc.txt","r");
if(!p){printf("No such file exists");return 0;}
int s=0,w=0,l=0,c=0;
char ch,ch1;
ch=' ';
while(!feof(p))
{
ch1=fgetc(p);
if(ch1!=' ' && ch1!='\0' && ch1!='\n')c++;
if(ch==' ' && ch1==' ')s++;
if((ch1==' '|| ch1=='\n') && (ch!=' ' && ch!='\n'))
{
s++;
w++;
}
if (ch1=='\n')l++;
ch=ch1;
}
if(c>0){l++;w++;}
printf("c:%d\nw:%d\nlc:%d\ns:%d\n",c,w,l,s);
return 0;
}