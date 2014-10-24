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
    long long int t,n,i,min,sum;
    t=scan();
    while(t--)
    {
        scanf("%lld",&n);
        long long int a[n];
        sum=0;
        for(i=0;i<n;i++)
        {
        scanf("%lld",&a[i]);
        if(i==0)
        min=a[0];
        if(a[i]<min)
        min=a[i];
        sum+=a[i];
        }
        printf("%lld\n",sum-(n*min));
    }
    return 0;
}
