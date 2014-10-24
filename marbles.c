#include<stdio.h>
#define ll long long int
ll c(ll a,ll b)
{
    if(b>a-b)b=a-b;
    ll ans=1,i;
    for(i=1;i<=b;i++)
    {
        ans=(ans*(a-i+1))/i;
    }
    return ans;
}
int main()
{
    ll a,b,ans,t;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&a,&b);
        ans=c(a-1,b-1);
        printf("%lld\n",ans);
    }
    return 0;
}
