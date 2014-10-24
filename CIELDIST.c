#include<stdio.h>
int main()
{
    long long int t,ds,dt,d;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld %lld",&ds,&dt,&d);
        if(ds+dt<=d)
        printf("%lld\n",d-dt-ds);
        else if(ds+d<dt)
        printf("%lld\n",dt-d-ds);
        else if(dt+d<ds)
        printf("%lld\n",ds-d-dt);
        else
        printf("0\n");
    }
    return 0;
}
