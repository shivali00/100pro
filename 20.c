#include<stdio.h>
int binarySearch(int *a,int l,int s,int h)
{
int m=(l+h)/2;
if(a[m]==s)return m;
if(a[m]>s)return binarySearch(a,l,s,m-1);
else return binarySearch(a,m+1,s,h);
return -1;
}
int main()
{
int a[10]={1,2,3,4,5,6,7,8,9,10};
int s;
printf("Enter element you want to search:");
scanf("%d",&s);
int f=binarySearch(a,0,s,9);
if(f==-1)printf("Not found");
else printf("%d found at index %d",s,f);
return 0;
}