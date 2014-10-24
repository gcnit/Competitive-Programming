#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t,n,i,mini,maxi,m;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&m);
        ll a[n];
        for(i=0;i<m;i++)
        {
            scanf("%lld",&a[i]);
            if(i==0)
            {
                mini=a[i];
                maxi=a[i];
            }
            else
            {
                mini=min(a[i],mini);
                maxi=max(a[i],maxi);
            }
        }
        for(i=0;i<n;i++)
        {
            printf("%lld ",max(abs(mini-i),abs(maxi-i)));
        }
        printf("\n");
    }
    return 0;
}
