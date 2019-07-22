#include<stdio.h>
#include<malloc.h>
struct Node
{
int num;
struct Node *n;
};
int main()
{
struct Node *j,*t,*s;
s=NULL;
int ch,k,position,count;
while(1)
{
printf("1.add at end\n");
printf("2.add at top\n");
printf("3.add at position\n");
printf("4.remove at position\n");
printf("5.traverse\n");
printf("6.exit\n");
printf("enter your choice: ");
scanf("%d",&ch);
fflush(stdin);
if(ch==1)
{
printf("enter a number :");
scanf("%d",&k);
fflush(stdin);
t=(struct Node *)malloc(sizeof(struct Node));
t->num=k;
t->n=NULL;
if(s==NULL)s=t;
else
{
j=s;
while(j->n!=NULL)
{
j=j->n;
}
j->n=t;
}
}
if(ch==2)
{
printf("enter a number :");
scanf("%d",&k);
fflush(stdin);
t=(struct Node *)malloc(sizeof(struct Node));
t->num=k;
t->n=NULL;
if(s==NULL)
{
t=s;
}
else
{
j=s;
s=t;
t->n=j;
}
}
if(ch==3)
{
count=1;
printf("enter position");
scanf("%d",&position);
fflush(stdin);
printf("enter a number");
scanf("%d",&k);
fflush(stdin);
t=(struct Node *)malloc(sizeof(struct Node));
t->num=k;
t->n=NULL;
if(s==NULL)
{
s=t;
}
else
{
j=s;
if(position==1)
{
s=t;
t->n=j;
}
else
{
while(j->n!=NULL)
{
if(count==position-1)
{
t->n=j->n;
j->n=t;
count++;
break;
}
count++;
j=j->n;
}
if(count==position-1)
{
j->n=t;
}
else
{
if(position>count)
{
printf("no records before that\n");
}
}
}
}
}
if(ch==4)
{
count=1;
printf("enter position");
scanf("%d",&position);
fflush(stdin);
if(s==NULL)
{
printf("no records\n");
}
else
{
if(position==1)
{
j=s;
s=j->n;
}
else
{
j=s;
while(j->n!=NULL)
{
if(count==position-1)
{
j->n=j->n->n;
count++;
break;
}
count++;
j=j->n;
}
}
if(position>count)
{
printf("no record exist at this position\n");
}
}
}
if(ch==5)
{
if(s==NULL)
{
printf("no record exists\n");
}
else
{
t=s;
while(t!=NULL)
{
printf("%d\n",t->num);
t=t->n;
}
}
}
if(ch==6)
{
break;
}
}
return 0;
}