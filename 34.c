#include<stdio.h>
int* trans(int n,int b[][c]) {
    int (*a)[n] = malloc(n*sizeof(*a));
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            a[j][i]=b[i][j];
        }
    }
    return *a;
}
int main()
{
int n;
printf("Enter n:");
scanf("%d",&n);
int a[n][n],i,j;
for(i=0;i<n;i++) for(j=0;j<n;j++)scanf("%d",&a[i][j]);
int b[n][n];
b[n]=trans(n,a);
for(i=0;i<n;i++){ for(j=0;j<n;j++) printf("%d ",b[i][j]);printf("\n");}
return 0;
}