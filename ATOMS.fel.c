#include<stdio.h>
#include<math.h>
int main()
{
    long long int t,n,k,m,T;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld %lld",&n,&k,&m);
        T=(double)log2(m/(double)n)/log2(k);
        printf("%lld\n",T);
    }
    return 0;
}
