#include<stdio.h>
struct student
{
int sno;
char sname[100];
int marks;	
};
int main()
{
	int n,avg=0;
	printf("enter no of students:");
	scanf("%d",&n);
	struct student s[n];
	for(int i=0;i<n;i++)
	{
		printf("Student %d:",i+1);
		scanf("%d %s %d",&s[i].sno,&s[i].sname,&s[i].marks);	
		avg+=s[i].marks;
	}	
	avg=avg/n;
	for(int i=0;i<n;i++)
	{
		if(s[i].marks==avg)
		{
			printf("%d %s %d",s[i].sno,s[i].sname,s[i].marks);
		}
	}
}