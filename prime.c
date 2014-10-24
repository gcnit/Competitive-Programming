#include<stdio.h>
#include<math.h>
int main()
{
int n,i,j;
scanf("%d",&n);
int a[n];
for(i=2;i<=n;i++)
a[i]=0;
for(i=2;i<=sqrt(n);i++)
if(a[i]==0)
{
for(j=i*i;j<=n;j+=i)
a[j]=1;
}
j=0;
for(i=2;i<=n;i++)
if(a[i]==0)
printf("%d\t%d\n",j++,i);
return 0;
}
