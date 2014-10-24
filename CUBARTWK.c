#include<stdio.h>
int main()
{
    long long int w,d,i,sum,counth[30],countd[30],hw[30],hd[30];
    while(1)
    {
        scanf("%lld %lld",&w,&d);
        if(!w && !d)
        break;
        for(i=0;i<=20;i++)
        {
            counth[i]=0;
            countd[i]=0;
        }
        for(i=0;i<w;i++)
        {
            scanf("%lld",&hw[i]);
            counth[hw[i]]++;
        }
        for(i=0;i<d;i++)
        {
            scanf("%lld",&hd[i]);
            countd[hd[i]]++;
        }
        sum=0;
        for(i=0;i<=20;i++)
        {
            if(counth[i]>countd[i])
            sum+=counth[i]*i;
            else sum+=countd[i]*i;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
