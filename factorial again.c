#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define gc getchar
#define ll long long int
#define M 1000000007
#define scan(t) t=input()
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

ll pw(ll a, ll b,ll p){
  ll r;
  if(b==0) return 1;
  r = pw(a,b/2,p);
  r = (r*r)%p;
  if(b%2) r = (r*a)%p;
  return r;
}
int main()
{
    ll t,product,n,i,p,y;
    scanf("%lld",&t);
    while(t--)
    {
        product=1;
        scanf("%lld %lld",&n,&p);
        if(n>=p/3.0)
        printf("0\n");
        else
        {
        for(i=1;i<=3*n;i++)
        {
            product=(product*i)%p;
        }
        y=pw(6,p-2,p);
        y=pw(y,n,p);
        product*=y;
        printf("%lld\n",product%p);
        }
    }
    return 0;
}

