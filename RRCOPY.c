#include<stdio.h>
int main()
{
    long long int t,n,count,a[100010],b[100010],i;
    scanf("%lld",&t);
    while(t--)
    {
        count=0;
        for(i=0;i<100010;i++)
        b[i]=0;
        scanf("%lld",&n);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            if(!b[a[i]])
            {
                b[a[i]]=1;
                count++;
            }
        }
        printf("%lld\n",count);
    }
    return 0;
}
