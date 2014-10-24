#include<cstdio>
#define ll long long int
#define M 1000000007

using namespace std;

ll pw(ll a, ll b){
  ll r;
  if(b==0) return 1;
  r = pw(a,b/2);
  r = (r*r)%M;
  if(b%2) r = (r*a)%M;
  return r;
}

int main()
{
    ll n,ans=1,i;
    scanf("%lld",&n);
    if(n<13)
    printf("0\n");
    else
    {
        n-=13;
        n/=2;
        for(i=n+1;i<=n+6;i++)
        ans=(ans*i)%M;
        ans=(ans*pw(720,M-2))%M;
        printf("%lld\n",ans);
    }
    return 0;
}
