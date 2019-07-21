#include<stdio.h>
#include<math.h>
int main()
{
int n,i=100,dig,arm,z;
scanf("%d",&n);
int j;
while(i<=n)
{
j=i;
if(i<999)dig=3;
else if(i<9999 && i>999) dig=4;
arm=0;
while(j!=0)
{
z=j%10;
arm+=pow(z,dig);
j=j/10;
}
if(arm==i) printf("%d is an Armstrong number    ",i);
i++;
}
return 0;
}