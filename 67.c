#include<stdio.h>
#include<malloc.h>
struct node
{
int num;
struct node *n;
};
struct node *s1;
void add()
{
int num;
struct node *t,*j;
printf("Enter a number:");
scanf("%d",&num);
t=(struct node *)malloc(sizeof(struct node));
t->num=num;
t->n=NULL;
if(s1==NULL)s1=t;
else
{
j=s1;
while(j->n!=NULL)j=j->n;
j->n=t;
}
}
void traverse()
{
struct node *j;
j=s1;
while(j!=NULL){
printf("%d\n",j->num);
j=j->n;
}
}
void reverseTraversal(struct node *s)
{
if(s==NULL) return;
reverseTraversal(s->n);
printf("%d\n",s->num);
}
void reverseTraversal(struct node *s)
{
if(s==NULL) return;
reverseTraversal(s->n);
printf("%d\n",s->num);
}
int main()
{
int ch,i;
while(1)
{
printf("1.Add\n");
printf("2.Traverse\n");
printf("3.Reverse Traversal\n");
printf("4.Reverse Traversal\n");
printf("5.Exit\n");
scanf("%d",&ch);
if(ch==1) add();
if(ch==2) traverse();
if(ch==3) reverseTraversal(s1);
if(ch==4) reverseTraversal(s1);
if(ch==5)break;
}
return 0;
}