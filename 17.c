#include<stdio.h>
int isLeapYear(int y)
{
if(y%400==0) return 1;
if(y%4==0 && y%100!=0) return 1;
return 0;
}
int main()
{
int y;
printf("Enter a year:");
scanf("%d",&y);
if(isLeapYear(y))printf("%d is a leap year",y);
else printf("%d is not a leap year",y);
return 0;
}