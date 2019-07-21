#include<stdio.h>
void delete(char*,int,int);
int main()
{
char a[100];
int pos,n;
printf("enter a string:");
gets(a);
printf("Enter position and number of characters:");
scanf("%d %d",&pos,&n);
delete(a,pos,n);
printf("%s",a);
return 0;
}
void delete(char *b,int pos,int n)
{
int i=0;
char *c;
while(*b!=0)
{
if(i==pos-1)
{
c=b;
for(int j=0;j<n;j++,c++);
while(*c!=0)
{
*b=*c;
c++;
b++;
}
*b=0;
break;
}
i++;
b++;
}
}