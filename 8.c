#include<stdio.h>
int gcd(int n1,int n2)
{
if(n1==1)return 1;
if(n2==1)return 1;
if(n1==n2) return n1;
else if(n1>n2) return gcd(n1-n2,n2);
else return gcd(n1,n2-n1);  
}
int main()
{
int n1,n2;
scanf("%d %d",&n1,&n2);
printf("GCD: %d",gcd(n1,n2));
return 0;
}