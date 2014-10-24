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
    ll t,i,x,y,sum;
    scan(t);
    while(t--)
    {
        scan(x);
        scan(y);
        sum=x+y;
        i=1;
        while(!isprime(sum+i))
        i++;
        printf("%lld\n",i);
    }
    return 0;
}
