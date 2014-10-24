#include<stdio.h>
#include<math.h>
int main()
{
long long int t,n,b,k,max;
scanf("%lld",&t);
while(t--)
{
scanf("%lld %lld",&n,&b);
max=(n*(n+1))/2;
if(b!=0 && n!=0)
{
k=sqrt(2*b);
if(b==(k*(k+1))/2 && k<=n)
max--;
printf("%lld\n",max);
}
else printf("%lld\n",max);
}
return 0;
}
