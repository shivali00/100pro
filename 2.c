#include<stdio.h>
int main()
{
char a[50],g;
int len;
printf("Enter a string:");
scanf("%s",a);
len=0;
for(int i=0;a[i]!='\0';i++,len++);
int i,j;
i=0;
j=len-1;
while(i<j)
{
if(a[i]!=a[j])
{
printf(" %s Not a palindrome.",a);
return 0;
}
i++;
j--;
}
printf("%s is a palindrome.",a);
return 0;
}