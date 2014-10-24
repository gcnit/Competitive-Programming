#include<stdio.h>
#include<math.h>
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
long long int x[100000001];
int main()
{
    long long int t,n,i=1,j,carry;
    x[0]=1;
    while(i<100000001)
    {
    x[i]=(x[i-1]*2)%1000000007;
    i++;
    }
    t=scan();
    while(t--)
    {
        n=scan();
        printf("%lld\n",x[n]-1);
    }
    return 0;
}
