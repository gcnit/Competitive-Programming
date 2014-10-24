#include<stdio.h>
int max(long long int a,long long int b)
{
    if(a>b)
    return a;
    else
    return b;
}
int main()
{
    long long int t,a,b,mi,ma;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&a,&b);
        mi=max(a,b);
        ma=a+b;
        printf("%lld %lld\n",mi,ma);
    }
    return 0;
}
