#include<stdio.h>
#include<math.h>
int main()
{
int n,i,j;
int a[541];
for(i=2;i<=541;i++)
a[i]=0;
for(i=2;i<=sqrt(541);i++)
if(a[i]==0)
{
for(j=i*i;j<=541;j+=i)
a[j]=1;
}
for(i=2;i<=541;i++)
if(a[i]==0)
{
printf("%d\n",i);
}
return 0;
}
