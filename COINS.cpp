#include<iostream>
#include<cstdio>
#include<map>
#define ll long long int
using namespace std;
map<ll,ll> dpMap;
ll coins(ll n)
{
    if(dpMap.count(n))
    return dpMap[n];
    else
    {
        dpMap[n]=coins(n/2)+coins(n/3)+coins(n/4);
        return dpMap[n];
    }

}

int main()
{
    ll i,n;
    for(i=0;i<=11;i++)
    dpMap[i]=i;
    while(scanf("%lld",&n)!=EOF)
    {
        printf("%lld\n",coins(n));
    }
    return 0;
}
