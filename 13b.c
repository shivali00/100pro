#include<stdio.h>
int main()
{
int l,nosp,num;
printf("Enter the level:");
scanf("%d",&l);
int i=1,j;
int k=1;
int y=0;
nosp=l-1;
while(y<l)
{
for(j=0;j<nosp;j++)printf(" ");
for(j=0;j<k;j++,i++)
{
printf("%d ",i%10);
}
printf("\n");
k++;
nosp--;
y++;
}
return 0;
}