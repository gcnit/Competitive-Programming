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
    ll t,i,a,b,x,y,count;
    scan(t);
    while(t--)
    {
        count=0;
        scan(a);
        scan(b);
        x=log2(a);
        y=log2(b);
        if(x<=y)
        {
            for(i=y;i>x;i--)
            {
                b/=2;
                count++;
            }
            if(a!=b)
            for(i=x;i>=0;i--)
            {
                a/=2;
                b/=2;
                count+=2;
                if(a==b)
                break;
            }
        }
        else
        {
            for(i=x;i>y;i--)
            {
                a/=2;
                count++;
            }
            if(a!=b)
            for(i=y;i>=0;i--)
            {
                a/=2;
                b/=2;
                count+=2;
                if(a==b)
                break;
            }
        }
        printf("%lld\n",count);
    }
    return 0;
}
