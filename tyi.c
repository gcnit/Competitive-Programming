#include<stdio.h>
main()
{
int i,j,n=5,k=1;
for(i=0;i<n;i++)
{
for(j=0;j<=n-i-2;j++)
printf(" ");
for(j=0;j<i;j++)
{
printf("%d ",k);
k++;
}
printf("\n");
}
}
