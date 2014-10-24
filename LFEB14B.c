#include<stdio.h>
int main()
{
    long long int t,n,i;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        long long int a[n];
        for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
        printf("%lld\n",n==1?1:n-1);
    }
    return 0;
}
