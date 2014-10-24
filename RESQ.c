#include<stdio.h>
#define gc getchar
#include<math.h>
long long int isprime(long long int a)
{
    long long int i;
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
long long int isperfectsquare(long long int a)
{
    long long int b;
    b=sqrt(a);
    if(a==b*b)
    return 1;
    else return 0;
}
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
    long long int t,n,K,i,sum,min;
    t=scan();
    while(t--)
    {
        n=scan();
        if(isprime(n))
        printf("%lld\n",n-1);
        else if(isperfectsquare(n))
        printf("0\n");
        else
        {
            for(i=sqrt(n);i>0;i--)
            {
                if(n%i==0)
                {
                    printf("%lld\n",n/i-i);
                    break;
                }
            }
        }
    }
    return 0;
}
