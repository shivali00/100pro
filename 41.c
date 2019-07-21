#include<stdio.h>
int main()
{
char a[100],b[100];
gets(a);
gets(b);
int i=0;
while(a[i]==b[i] && a[i]!=0 && b[i]!=0)i++;
if(a[i]==b[i]) printf("identical");
else printf("Different");
return 0;
}