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
    long long int t,n,i,count;
    t=scan();
    while(t--)
    {
        count=1;
        n=scan();
        long long int A[n];
        for(i=0;i<n;i++)
        {
            A[i]=scan();
            if(i>0)
            {
                if(A[i]>A[i-1])
                {
                    A[i]=A[i-1];
                }
                else count++;
            }
        }
        printf("%lld\n",count);
    }
    return 0;
}
