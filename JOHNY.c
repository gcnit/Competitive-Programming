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
    long long int t,i,n,count,k;
    t=scan();
    while(t>0)
    {
        count=0;
        n=scan();
        long long int A[n];
        for(i=0;i<n;i++)
        A[i]=scan();
        k=scan();
        for(i=0;i<n;i++)
        if(A[i]<=A[k-1])
        count++;
        printf("%lld\n",count);
        t--;
    }
    return 0;
}
