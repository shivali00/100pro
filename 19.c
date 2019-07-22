#include<stdio.h>
int main()
{
int a[10]={1,2,3,4,5,6,7,8,9,10};
int s,i;
printf("Enter element you want to search:");
scanf("%d",&s);
for(i=0;i<10;i++)
{
if(a[i]==s) break;
}
if(i==10)printf("Not found");
else printf("%d found at index %d",s,i);
return 0;
}