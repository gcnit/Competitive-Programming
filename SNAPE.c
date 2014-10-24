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
    ll t,a,b;
    double c,d;
    scan(t);
    while(t--)
    {
        scanf("%lld",&a);
        scanf("%lld",&b);
        c=sqrt((a*a)+(b*b));
        if(a>b)
        d=sqrt((a*a)-(b*b));
        else
        d=sqrt(-(a*a)+(b*b));

        printf("%lf %lf\n",d,c);
    }
    return 0;
}
