#include<stdio.h>
int main()
{
    long long int t,n,sum,a,i;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        sum=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a);
            sum=sum+(a%n);
        }
        if(sum%n)
        printf("NO\n");
        else
        printf("YES\n");
    }
    return 0;
}
