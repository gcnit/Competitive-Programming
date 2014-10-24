#include<cstdio>
#define ll long long int
using namespace std;

int main()
{
    ll n,m,i,x,d,y;
    scanf("%lld %lld",&n,&m);
    ll a[n+10];
    char s[10];
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&a[i]);
    }
    x=0;
    for(i=0;i<m;i++)
    {
        scanf("%s %lld",s,&d);
        if(s[0]=='C')
        x+=d;
        else if(s[0]=='A')
        x-=d;
        else
        {
            y=((x+d)%n+n)%n;
            if(!y) y+=n;
            printf("%lld\n",a[y]);
        }
    }
    return 0;
}
