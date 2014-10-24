#include<stdio.h>
int main()
{
int i,j,x[100],n,k;
long int a;
scanf("%ld %d %d",&a,&n,&k);
for(i=0;i<k;i++)
x[i]=0;
for(i=0;i<a;i++)
{
x[0]++;
for(j=0;j<k;j++)
if(x[j]>n)
{
x[j]=0;
x[j+1]++;
}
}
for(j=0;j<k;j++)
printf("%d",x[j]);
printf("\n");
return 0;
}
