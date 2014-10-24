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
    long long int t,sum,n,i;
    t=scan();
    while(t--)
    {
        n=scan();
        long long int a[n][2];
        sum=0;
        for(i=0;i<n;i++)
        {
            a[i][0]=scan();
            a[i][1]=scan();
            sum+=a[i][0]-a[i][1];
        }
        printf("%lld\n",sum);
    }

    return 0;
}
