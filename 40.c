#include<stdio.h>
#include<math.h>
int main()
{
int n;
scanf("%d",&n);
int dig,i;
for(i=n,dig=0;i!=0;i/=10,dig++);
int arm,z;
i=n;
arm=0;
while(i!=0)
{
z=i%10;
arm+=pow(z,dig);
i=i/10;
}
if(arm==n) printf("%d is an Armstrong number",n);
else printf("%d is not an Armstrong number",n);
return 0;
}