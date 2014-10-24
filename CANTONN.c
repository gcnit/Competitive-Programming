#include<stdio.h>
int main()
{
    long long int t,n,i,c,a[4500];
    a[1]=0;
    for(i=2;i<4500;i++)
    {
    a[i]=a[i-1]+i-1;
    }
    scanf("%lld",&t);
    while(t--)
    {
            scanf("%lld",&n);
            for(i=1;i<4500;i++)
            {
                if(a[i]>=n)
                {
                    c=i;
                    break;
                }
            }
            if(i&1)
            printf("TERM %lld IS %lld/%lld\n",n,n-a[c-1],i-n+a[c-1]);
            else
            printf("TERM %lld IS %lld/%lld\n",n,i-n+a[c-1],n-a[c-1]);

    }
    return 0;
}
