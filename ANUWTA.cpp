#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t,n;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        ll ans=n+(n*(n+1))/2;
        printf("%lld\n",ans);

    }

    return 0;
}
