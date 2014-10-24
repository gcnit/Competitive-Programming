#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define gc getchar
#define ll long long int
#define M 1000000007
#define scan(t) t=input()
#define print(n) printf("%lld\n",n)
#define scans(s) scanf("%s",s)
#define nl printf("\n")
#define loop(start,k,end) for(k=start;k<end;k++)
#define ascan(a,i,l) for(i=0;i<l;i++) scan(a[i])
#define aprint(a,i,l) for(i=0;i<l;i++) print(a[i])
#define atprint(a,i,l) for(i=0;i<l;i++) printf("%lld ",a[i]); nl
inline ll input() {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  ll ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}
ll rev(ll *x,ll i,ll n)
{
    ll j,k,b[n-i];
    loop(i,j,n)
    {
        b[n-1-j]=x[j];
    }
    loop(i,j,n)
    {
        x[j]=b[j-i];
    }
}
ll mulmod(ll a,ll b,ll c){
    ll x = 0,y=a%c;
    while(b > 0){
        if(b%2 == 1){
            x = (x+y)%c;
        }
        y = (y*2)%c;
        b /= 2;
    }
    return x%c;
}
int main()
{
    ll t,i,n,a,b,c,sum,mul;
    char s[1050];
    scan(t);
    while(t--)
    {
        scan(n);
        ll x[n];
        loop(0,i,n)
        scan(x[i]);
        scanf("%lld %lld %lld",&a,&b,&c);
        scanf("%s",s);
        sum=0,mul=1;
        loop(0,i,n)
        {
            if(s[i]=='R')
            {
                rev(x,i,n);
            }
            else if(s[i]=='A')
            sum=sum+a;
            else if(s[i]=='M')
            {
                sum=mulmod(sum,b,c)%c;
                mul=mulmod(mul,b,c)%c;
            }
            x[i]=(mulmod(mul,x[i],c)+sum)%c;
        }
        for(i=0;i<n;i++)
        {
        printf("%lld",x[i]);
        if(i==n-1)
        printf("\n");
        else printf(" ");
        }
    }
    return 0;
}
