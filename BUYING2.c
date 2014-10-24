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
    long long int t,n,K,i,sum,min;
    t=scan();
    while(t--)
    {
        sum=0;
        n=scan();
        K=scan();
        long long int A[n];
        for(i=0;i<n;i++)
        {
            A[i]=scan();
            if(i==0)
            min=A[i];
            else if(min>A[i])
            min=A[i];
            sum+=A[i];
        }
        if(sum%K==0)
        {
            printf("%lld\n",sum/K);
        }
        else
        {
            if((sum-min)/K==sum/K)
            printf("-1\n");
            else printf("%lld\n",sum/K);
        }
    }
    return 0;
}
