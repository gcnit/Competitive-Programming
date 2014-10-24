#include<cstdio>
#include<math.h>
#define ll long long int
using namespace std;

ll nfour(ll n,ll m)
{
    ll a=n,b=n+1,c=2*n+1,x,ans,d;
    d=((3*(n%m)*(n%m))+(3*n)-1)%m;
    d=(d+m)%m;
    if(a%2==0)
    a/=2;
    else b/=2;
    if(a%3==0)
    a/=3;
    else if(b%3==0)
    b/=3;
    else c/=3;
    if(a%5==0)
    a/=5;
    else if(b%5==0)
    b/=5;
    else if(c%5==0)
    c/=5;
    else
    {
        x=n/5;
        x%=m;
        if(n%5==1)
        {
            d=15*x*x+9*x+1;
        }
        else if(n%5==3)
        {
            d=15*x*x+21*x+7;
        }
    }
    a=((a%m)*(b%m))%m;
    c=((c%m)*(d%m))%m;
    ans=(a*c)%m;
    return ans;
}

int main()
{
    ll t,n,m,i,x,y,ans,a[100100],b[100100];
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&m);
        x=sqrt(n);
        ans=0;
        for(i=1;i<=x;i++)
        {
            a[i]=n/i;
            b[i]=(nfour(a[i],m)+m)%m;
        }
        for(i=1;i<=x;i++)
        {
            ans=(ans+(a[i]%m)*((i*i)%m)*((i*i)%m))%m;
            ans=(ans+m)%m;
        }
        for(i=1;i<=x;i++)
        {
            ans+=b[i];
        }
        ans=((((ans-x*nfour(x,m))%m)+m)%m);
        printf("%lld\n",ans);
    }
    return 0;
}
