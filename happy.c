#include<stdio.h>
int main()
{
int n;
printf("Enter a number:");
scanf("%d",&n);
int i,j,k;
i=n;

while(i!=1 && i!=7)
{
k=0;
while(i!=0)
{
j=i%10;
k+=j*j;
i/=10;
}
i=k;
printf("%d\n",i);
if(i<10 && (i!=1 || i!=7)) break;
}
if(i==1 || i==7) printf("Happy number.");
else printf("Not a happy number");
return 0;
}