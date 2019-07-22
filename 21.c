#include<stdio.h>
int main()
{
int n,a[10],i,s;
printf("enter n(<10):");
scanf("%d",&n);
printf("Enter %d number:",n);
for(i=0;i<n;i++)scanf("%d",&a[i]);
printf("Enter the number you want to search:");
scanf("%d",&s);
int l,h,m;
l=0;
h=n-1;
while(l<=h)
{
m=(l+h)/2;
if(a[m]==s) {printf("Element %d found at position %d",a[m],m+1);return 0;}
if(a[m]<s)l=m+1;
else h=m-1;
}
printf("Element doesnt exists in the list");
return 0;
}