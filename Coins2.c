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
long long int coins[100000000];
long long int max(long long int a,long long int b)
{
    if(a>=b)
    return a;
    else
    return b;
}
long long int fun(long long int n)
{
    if (n==0)
    return 0;
    return max(max(fun(n/2),n/2)+max(fun(n/3),n/3)+max(fun(n/4),n/4),n);
}
int main()
{
    long long int n;
    while(scanf("%lld",&n) != EOF)
    {
        printf("%lld\n",fun(n));
    }
    return 0;
}
