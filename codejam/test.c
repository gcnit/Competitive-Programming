#include<stdio.h>
int main()
{
    long long int t,a,b,k,i,j,count,l;
    scanf("%lld",&t);
    for(l=1;l<=t;l++)
    {
        count=0;
        scanf("%lld %lld %lld",&a,&b,&k);
        count=k*b+k*(a-k);
        if(a<b)
        {
            for(i=k+1;i<b;i++)
            {
                if((i&k)<k)
                {
                    count++;
                    if(i<a)
                    count++;
                }
            }
        }
        else
        {
            for(i=k+1;i<a;i++)
            {
                if((i&k)<k)
                {
                    count++;
                    if(i<b)
                    count++;
                }
            }
        }
        printf("%lld\n",count);
    }
    return 0;
}
