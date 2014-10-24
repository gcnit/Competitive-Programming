#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t,n,m,i,sum,maxi;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&m);
        ll a[n];
        sum=m;
        maxi=-1;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            sum+=a[i];
            if(a[i]>maxi) maxi=a[i];
        }
        if(sum%n==0 && maxi<=sum/n)
            printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
