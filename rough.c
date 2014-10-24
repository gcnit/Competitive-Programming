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

ll isprime(ll a)
{
    ll i;
    if(a==2 || a==3)
    return 1;
    if(a==1 || a==0)
    return 0;
    for(i=2;i<=sqrt(a);i++)
    {
        if(isprime(i))
        if(a%i==0)
        return 0;
    }
    return 1;
}
int main()
{
    ll t,a,i,count=0;
    scan(t);
    while(t--)
    {
        for(i=2;i<1250*1250;i++)
        if(isprime(i))
        count++;
        printf("%lld",count);
    }
    return 0;
}
