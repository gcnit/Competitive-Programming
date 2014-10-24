#include<stdio.h>
#include<math.h>
int main()
{
int t,i,n,j;
long long int f[25001],g[17];
f[0]=1;
for(i=1;i<=25000;i++)
f[i]=f[i-1]*26;
g[0]=1;
for(i=1;i<=16;i++)
g[i]=g[i-1]*2;
for(i=1;i<=10;i++)
printf("%lld\n",f[i]);
scanf("%d",&t);
for(i=0;i<t;i++)
{
scanf("%d",&n);
for(j=0;g[j]<=n;j++)
;
if(n%g[j]==0)
printf("%lld",f[n/4]%1000000007);
if(n%4==1||n%4==2)
printf("%lld",f[n/4+1]%1000000007);

if(n%4==3)
printf("%lld",f[n/4+2]%1000000007);
}
return 0;
}
