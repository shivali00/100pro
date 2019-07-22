#include<stdio.h>
char * subString(char *a,char *b,int pos)
{
int i=0;
while(i<pos-1 && a[i]!='\0')
{
i++;
}
if(i!=pos) {printf("invalid position\n");return a;}

}