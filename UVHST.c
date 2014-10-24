#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define gc getchar
#define ll long long int
#define M 1000000007
#define print(n) printf("%lld\n",n)
#define loop(start,k,end) for(k=start;k<end;k++)
inline ll scan() {
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
    ll t,n,c;
    t=scan();
    while(t--)
    {
        n=scan();
        c=scan();
        if(n/c==0)
        print(n/c);
        else print(n/c-1);
    }
    return 0;
}
