#include<stdio.h>
int main()
{
    long long int n,t,q,i,e,w;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        long long int s[n],a[n];
        for(i=0;i<n;i++)
        {
            scanf("%lld",&s[i]);

            if(i)
            {
                a[i]=a[i-1]^s[i];
            }
            else
            a[i]=s[i];
        }
        scanf("%lld",&q);
        while(q--)
        {
            scanf("%lld %lld",&w,&e);
            if(w!=0)
            {
                printf("%lld\n",a[e]^a[w-1]);
            }
            else printf("%lld\n",a[e]);
        }
    }
    return 0;
}
