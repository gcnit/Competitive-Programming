#include<iostream>
#include<cstdio>
#define ll long long int

using namespace std;

ll a[1000100];
int main()
{
    ll t,i,n,k,ans;
    scanf("%lld",&t);
    a[0]=1;
    for(i=1;i<107;i++)
    {
        a[i]=(a[i-1]*i)%107;
    }
    while(t--)
    {
        scanf("%lld %lld",&n,&k);
        ans=n;
        for(i=0;i<k;i++)
        {
            if(ans>=107 || (ans>=5 && i<(k-1)))
            {
                ans=0;
                break;
            }
            else ans=a[ans];
        }
        printf("%lld\n",ans);
    }
    return 0;
}
