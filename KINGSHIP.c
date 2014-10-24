#include<stdio.h>
int main()
{
    long long int t,n,i,a,min,sum;
    scanf("%lld",&t);
    while(t--)
    {
        sum=0;
        scanf("%lld",&n);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a);
            if(i==0)
            min=a;
            else if(a<min)
            min=a;
            sum+=a;
        }
        sum=min*(sum-min);
        printf("%lld\n",sum);
    }
    return 0;
}
