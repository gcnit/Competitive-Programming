#include<stdio.h>
int main()
{
long long int t,i,n,x,sum1,sum2;
scanf("%lld",&t);
for(i=0;i<t;i++)
{
    sum1=0;
    sum2=0;
    scanf("%lld",&n);
    while(n>0)
    {
        scanf("%lld",&x);
        sum1+=(x/30+1)*10;
        sum2+=(x/60+1)*15;
        n--;
    }
    if(sum1>sum2)
    printf("Case %lld: Frag %lld\n",i+1,sum2);
    else if(sum1<sum2)
    printf("Case %lld: Respawn %lld\n",i+1,sum1);
    else if(sum1==sum2)
    printf("Case %lld: Respawn Frag %lld\n",i+1,sum1);
}
return 0;
}
