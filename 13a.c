#include<stdio.h>
int main()
{
int level,nosp,num;
printf("Enter the level:");
scanf("%d",&level);
num=level;
int i=1,j;
nosp=level-1;
while(i<=num)
{
for(j=0;j<nosp;j++)printf(" ");
for(j=1;j<=i;j++)printf("%d ",i);
printf("\n");
i++;
nosp--;
}
return 0;
}