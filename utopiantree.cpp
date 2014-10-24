#include<cstdio>
#include<iostream>
#define ll long long int
using namespace std;

ll pw(ll a, ll b){
  ll r;
  if(b==0) return 1;
  r = pw(a,b/2);
  r = r*r;
  if(b%2) r = r*a;
  return r;
}

int main()
{
    ll t,n,ans;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        ans=pw(2,(n+1)/2);
        if(!(n%2))ans++;
        printf("%lld\n",ans);
    }
    return 0;
}
