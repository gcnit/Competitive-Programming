#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t,ans,n,i;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        ll sum[n+10],sum1[n+10],a[n+10],b[n+10];
        memset(sum,0,sizeof(sum));
        memset(sum1,0,sizeof(sum1));
        ans=0;
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&a[i]);
            sum[i]=sum[i-1]+a[i];

            if(a[i]*sum[i-1]<0)
            {
                ans+=abs(sum[i-1]*i)-abs(sum1[i-1]);
                sum1[i]=sum[i]*i;
            }
            else sum1[i]=sum1[i-1]+a[i]*i;
        }
        printf("%lld\n",ans);
    }
    return 0;
}
