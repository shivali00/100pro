#include<stdio.h>
int main()
{
char *a,*buff,c;
FILE *f1;
f1=fopen("abc.txt","w");
printf("enter text:");
gets(a);
fputs(a,f1);
fclose(f1);
printf("1    ");
f1=fopen("abc.txt","r");
printf("2    ");
FILE *f2=fopen("abc2.txt","a");
printf("if    ");
if(f1)
{
while((c=fgetc(f1))!=EOF)
{
fputc(c,f2);
}
printf("while    ");
}
printf("File copied successfully.\n");
fclose(f1);
fclose(f2);
return 0;
}