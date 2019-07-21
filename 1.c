#include<stdio.h>
int main()
{
char a[50],g;
int len,i,j;
printf("Enter a string:");
scanf("%s",a);
len=0;
for(int i=0;a[i]!='\0';i++,len++);
i=0;
j=len-1;
while(i<j)
{
g=a[i];
a[i]=a[j];
a[j]=g;
i++;
j--;
}
printf("%s",a);
return 0;
}