#include<cstdio>
using namespace std;

int main()
{
    long long int t,n,i,x,a[200],m,count1,count2;
    scanf("%lld",&t);
    while(t--)
    {
        for(i=0;i<=100;i++) a[i]=-1,d[i]=-1;
        count1=0;
        count2=0;
        scanf("%lld",&n);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&b[i]);
            a[b[i]]=i;
        }
        count1=n;
        scanf("%lld",&m);
        for(i=0;i<m;i++)
        {
            scanf("%lld",&c[i]);
            d[c[i]]=i;
        }
        if(n>m)
        {
            count=n-m;
            for(i=0;i<=100;i++)
                if((a[i]>=0 && d[i]==-1) || (a[i]==-1 && d[i]>=0))
                count++;
            printf("%lld\n",count);
            continue;
        }
        else if(n<m)
        {
            count=m-n;

        }
        count=0;
        for(i=0;i<=100;i++)
        {
            if(a[i]>=0 && d[i]>=0)
            if(a[i]!=d[i]+flag)
            {
                if(a[i]>d[i]+flag)
                {
                    flag+=d[i]+flag-a[i];
                }
                else flag-=d[i]+flag-a[i];
            }
        }
        if(count1>count2)
            printf("%lld\n",count1);
        else printf("%lld\n",count2);
    }
    return 0;
}
