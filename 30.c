#include<stdio.h>
int main()
{
int m;
printf("Enter the grade of the student:");
scanf("%d",&m);
if(m>=60) printf("FIRST");
else if(m>=50 && m<60) printf("SECOND");
else if(m>=40 && m<50) printf("THIRD");
else printf("FAIL");
return 0;
}