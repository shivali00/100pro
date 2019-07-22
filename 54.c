#include<stdio.h>
struct aaa
{
	char name[100];
	int age;
}a;
int main()
{
scanf("%s %d",&a.name,&a.age);
struct aaa *ptr;
ptr=&a;
printf("%s ",ptr->name);
printf("%d ",ptr->age);
return 0;
}