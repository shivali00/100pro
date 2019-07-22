#include<stdio.h>
#include<malloc.h>
struct Node
{
int num;
struct Node *n,*p;
};
struct Node *start=NULL;
struct Node *end=NULL;
void addAtEnd(int num)
{
struct Node *t;
t=(struct Node *)malloc(sizeof(struct Node));
t->num=num;
t->n=NULL;
t->p=NULL;
if(start==NULL)
{
start=t;
end=t;
}
else
{
end->n=t;
t->p=end;
end=t;
}
}
void insertAtTop(int num)
{
struct Node *t;
t=(struct Node *)malloc(sizeof(struct Node));
t->num=num;
t->n=NULL;
t->p=NULL;
if(start==NULL)
{
start=t;
end=t;
}
else
{
t->n=start;
start->p=t;
start=t;
}
}
void insertAtPosition(int num,int pos)
{
struct Node *p1;
int x;
struct Node *t;
t=(struct Node *)malloc(sizeof(struct Node));
t->num=num;
t->n=NULL;
t->p=NULL;
x=1;
p1=start;
while(x<pos && p1!=NULL)
{
p1=p1->n;
x++;
}
if(p1==NULL)
{
if(start==NULL)
{
start=t;
end=t;
}
else
{
end->n=t;
t->p=end;
end=t;
}
}
else
{
if(p1==start)
{
t->n=start;
start->p=t;
start=t;
}
else
{
t->n=p1;
t->p=p1->p;
p1->p->n=t;
p1->p=t;
}
}
}
void removeFromPosition(int pos)
{
struct Node *p1;
int x;
if(start==NULL)
{
printf("Invalid Position\n");
return;
}
x=1;
p1=start;
while(x<pos && p1!=NULL)
{
p1=p1->n;
x++;
}
if(p1==NULL)
{
printf("Invalid position\n");
return;
}
if(p1==start && p1==end)
{
start=NULL;
end=NULL;
}
else
{
if(p1==start)
{
start=start->n;
start->p=NULL;
}
else
{
if(p1==end)
{
end=end->p;
end->n=NULL;
}
else
{
p1->p->n=p1->n;
p1->n->p=p1->p;
}
}
}
free(p1);
}
void traverseTopToBottom()
{
struct Node *t;
t=start;
while(t!=NULL)
{
printf("%d\n",t->num);
t=t->n;
}
}
void traverseBottomToTop()
{
struct Node *t;
t=end;
while(t!=NULL)
{
printf("%d\n",t->num);
t=t->p;
}
}
int main()
{
int ch,num,pos;
while(1)
{
printf("1. Add a node at end\n");
printf("2. Insert a node at top\n");
printf("3. Insert a node at a position\n");
printf("4. Remove a node from a position\n");
printf("5. Traverse - Top To Bottom\n");
printf("6. Traverse - Bottom To Top\n");
printf("7. Exit\n");
printf("Enter your choice :");
scanf("%d",&ch);
if(ch==1)
{
printf("Enter a number to add at end : ");
scanf("%d",&num);
addAtEnd(num);
}
if(ch==2)
{
printf("Enter a number to insert at top : ");
scanf("%d",&num);
insertAtTop(num);
}
if(ch==3)
{
printf("Enter a number to insert : ");
scanf("%d",&num);
printf("Enter position : ");
scanf("%d",&pos);
insertAtPosition(num,pos);
}
if(ch==4)
{
printf("Enter position of the node to remove : ");
scanf("%d",&pos);
removeFromPosition(pos);
}
if(ch==5)
{
traverseTopToBottom();
}
if(ch==6)
{
traverseBottomToTop();
}
if(ch==7)
{
break;
}
}
return 0;
}