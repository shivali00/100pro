#include<stdio.h>
void print(int i)
{
printf("%d",i);
if(i==100)return;
print(++i);
}
int main()
{
print(1);
return 0;
}