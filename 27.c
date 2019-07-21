#include<stdio.h>
int main()
{
int a[4][4],i,j,s,l;
printf("Enter elements row-wise");
for(int i=0;i<4;i++) for(j=0;j<4;j++)scanf("%d",&a[i][j]);
s=a[0][0];
l=a[0][1];
if(a[0][0]>a[0][1])
{
s=a[0][1];
l=a[0][0];
}
for(i=0;i<4;i++)
{
for(j=0;j<4;j++)
{
if(a[i][j]<s)s=a[i][j];
if(a[i][j]>l)l=a[i][j];
}
}
printf("%d %d",s,l);
//for(int i=0;i<4;i++) {for(j=0;j<4;j++)printf("%d\t",a[i][j]);printf("\n");}
return 0;
}