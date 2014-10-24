#include<stdio.h>
int main()
{
    long long int t,min,max,i,n;
    scanf("%lld",&t);
    while(t>0)
    {
        min=1000001,max=-1;
        scanf("%lld",&n);
        long long int A[n];
        for(i=0;i<n;i++)
        scanf("%lld",&A[i]);
        for(i=0;i<n;i++)
        {
            if(A[i]<=min)
            min=A[i];
            if(A[i]>=max)
            max=A[i];
        }
        printf("%lld %lld\n",min,max);
        t--;
    }
    return 0;
}
