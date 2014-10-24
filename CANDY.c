#include<stdio.h>
int main()
{
    long long int n,sum,i,x;
    while(1)
    {
        scanf("%lld",&n);
        if(n==-1)
        break;
        long long int a[n];
        sum=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            sum+=a[i];
        }
        if(sum%n!=0)
        printf("-1\n");
        else
        {
            x=0;
            sum/=n;
            for(i=0;i<n;i++)
            if(a[i]<sum)
            x+=sum-a[i];
            printf("%lld\n",x);
        }
    }
    return 0;
}
