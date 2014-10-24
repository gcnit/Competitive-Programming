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
int main()
{
    ll n,i,min[3],t;
    scan(t);
    while(t--)
    {
    scanf("%lld",&n);
    ll a[n];
    min[0]=M;
    min[1]=M;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        if(a[i]<=min[0])
        {
            min[1]=min[0];
            min[0]=a[i];
        }
        else if(a[i]<=min[1])
        {
            min[1]=a[i];
        }
    }
    printf("%lld\n",min[1]+min[0]);
    }
    return 0;
}
