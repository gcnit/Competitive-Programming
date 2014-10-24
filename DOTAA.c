#include<stdio.h>
int main()
{
    long long int t,sum,n,m,d,h;
    scanf("%lld",&t);
    while(t--)
    {
        sum=0;
        scanf("%lld %lld %lld",&n,&m,&d);
        while(n--)
        {
            scanf("%lld",&h);
            h=(h-1)/d;
            sum+=h;
        }
        if(sum>=m)
        printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
