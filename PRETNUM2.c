#include<stdio.h>
#define gc getchar
#include<math.h>

long long int isperfectsquare(long long int n)
{
    long long int x;
    x=sqrt(n);
    if(x*x==n)
    return 1;
    else return 0;
}

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
long long int isprNoDiv(long long int i)
{
    if(i==1)
    return 0;
    if(isprime(i))
    {
        return 1;
    }
    else if(isperfectsquare(i))
    {
        return isprNoDiv(sqrt(i));
    }
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
    long long int t,l,r,i,k,x,j,count;
    t=scan();
    while(t--)
    {
        count=0;
        l=scan();
        r=scan();
        for(i=l;i<=r;i++)
        {
            if(isprNoDiv(i))
            count++;
        }
        printf("%lld\n",count);
    }
    return 0;
}
