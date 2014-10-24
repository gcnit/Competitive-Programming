#include<stdio.h>
int main()
{
    long long int t;
    double a,b,c,d,s,ans;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
        s=(a+b+c+d)/2.0;
        ans=sqrt((s-a)*(s-b)*(s-c)*(s-d));
        printf("%.2lf\n",ans);
    }
    return 0;
}
