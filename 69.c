#include<stdio.h>
#include<malloc.h>
struct node
{
int num;
struct node *n;
};
struct node *s1,*s2;
void add(int ch)
{
int num;
struct node *t,*j;
printf("Enter a number:");
scanf("%d",&num);
t=(struct node *)malloc(sizeof(struct node));
t->num=num;
t->n=NULL;
if(ch==1)
{
if(s1==NULL)s1=t;
else
{
j=s1;
while(j->n!=NULL)j=j->n;
j->n=t;
}
}
if(ch==2)
{
if(s2==NULL)s2=t;
else
{
j=s2;
while(j->n!=NULL)j=j->n;
j->n=t;
}
}
}
void traverse(int ch)
{
struct node *j;
if(ch==1)
{
j=s1;
while(j!=NULL){
printf("%d",j->num);
j=j->n;
}
}
else if(ch==2)
{
j=s2;
while(j!=NULL){
printf("%d",j->num);
j=j->n;
}
}
}
void combine()
{
struct node *t,*j,*k;
j=s1;
while(j->n!=NULL)j=j->n;
k=s2;
while(k!=NULL)
{
t=(struct node *)malloc(sizeof(struct node));
t->num=k->num;
j->n=k;
j=j->n;
k=k->n;
}
traverse(1);
}
int main()
{
int ch,i;
while(1)
{
printf("1.Add\n");
printf("2.Traverse\n");
printf("3.Combine\n");
printf("4.Exit\n");
scanf("%d",&ch);
if(ch==1)
{
printf("1)List 1\t 2)List 2:");
scanf("%d",&i);
add(i);
continue;
}
if(ch==2)
{
printf("1)List 1\t 2)List 2:");
scanf("%d",&i);
traverse(i);
continue;
}
if(ch==3)
{
combine();
continue;
}
if(ch==4) break;
}
return 0;
}
