#include<stdio.h>
#define gc getchar
inline long long int scan() {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  long long int ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}
int main()
{
    long long int t,n,C,Q,L,R,i;
    t=scan();
    while(t--)
    {
        n=scan();
        C=scan();
        Q=scan();
        for(i=0;i<Q;i++)
        {
            L=scan();
            R=scan();
            if(C>=L && C<=R)
            C=L+R-C;
        }
        printf("%lld\n",C);
    }
    return 0;
}
