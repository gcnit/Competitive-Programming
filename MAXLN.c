#include<stdio.h>
int main()
{
    long long int t,n,i;
    double x;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
    scanf("%lld",&n);
    x=(double)(n*n)+0.25;
    printf("Case %lld: %.2lf\n",i,x);
    }
    return 0;
}
