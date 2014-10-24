#include<stdio.h>
int main()
{
    long long int t,a,b,k,i,j,count,l;
    scanf("%lld",&t);
    for(l=1;l<=t;l++)
    {
        count=0;
        scanf("%lld %lld %lld",&a,&b,&k);
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            if((i&j)<k)
            count++;
        }
        printf("Case #%lld: %lld\n",l,count);
    }
    return 0;
}
