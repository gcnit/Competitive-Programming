#include<stdio.h>
int main()
{
    long long int a,b,c,d,aa[4],bb[4],cc[4],dd[4],i;
    for(i=0;i<4;i++)
    {
        aa[i]=0;
        bb[i]=0;
        cc[i]=0;
        dd[i]=0;
    }
    for(i=0;i<27;i++)
    {
        scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
        aa[a]++;
        bb[b]++;
        cc[c]++;
        dd[d]++;
    }
    for(i=0;i<3;i++)
    printf("%lld\t",aa[i]);
    printf("\n");
    for(i=0;i<3;i++)
    printf("%lld\t",bb[i]);
    printf("\n");
    for(i=0;i<3;i++)
    printf("%lld\t",cc[i]);
    printf("\n");
    for(i=0;i<3;i++)
    printf("%lld\t",dd[i]);
    printf("\n");
    return 0;
}
