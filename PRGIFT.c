#include<stdio.h>
int main()
{
    long long int t,count,k,n,a,i;
    scanf("%lld",&t);
    while(t--)
    {
        count=0;
        scanf("%lld %lld",&n,&k);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a);
            if(a%2==0)
            count++;
        }
        if((k==0 && count!=n) || (k!=0 && count>=k))
        printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
