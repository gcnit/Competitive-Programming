#include<stdio.h>
int main()
{
    long long int n,a,b,c;
    double d;
    scanf("%lld",&n);
    while(n--)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        d=((a+c)/2.0)-b;
        if(d<0)
        d*=-1;
        printf("%.2lf\n",d);
    }
    return 0;
}
