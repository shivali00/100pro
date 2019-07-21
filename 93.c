#include<stdio.h>
int main()
{
int lev;
scanf("%d",&lev);
int j,i=0,y=1,nosp=lev-1;
while(i<lev)
{
for(j=0;j<nosp;j++)printf(" ");
for(j=0;j<=i;j++,y++)printf("%d ",y);
printf("\n");
i++;
nosp--;
}
return 0;
}