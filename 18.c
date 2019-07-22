#include<stdio.h>
int linearSearch(int *a,int i,int s,int e)
{
if(i>e)return -1;
if(a[i]==s)return i;
return linearSearch(a,i+1,s,e);
}
int main()
{
int a[10]={1,2,3,4,5,6,7,8,9,10};
int s;
printf("Enter element you want to search:");
scanf("%d",&s);
int f=linearSearch(a,0,s,9);
if(f==-1)printf("Not found");
else printf("%d found at index %d",s,f);
return 0;
}