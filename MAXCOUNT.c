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
    long long int t,i,max,maxi,n,b[10001];
    t=scan();
    while(t--)
    {
        for(i=0;i<=10000;i++)
        {
            b[i]=0;
        }
        n=scan();
        long long int A[n];
        for(i=0;i<n;i++)
        {
            A[i]=scan();
            b[A[i]]++;
        }
        for(i=1;i<=10000;i++)
        {
            if(i==1)
            {
                max=b[1];
                maxi=1;
            }
            else if(b[i]>max)
            {
                max=b[i];
                maxi=i;
            }
        }
        printf("%lld %lld\n",maxi,max);
    }
    return 0;
}
