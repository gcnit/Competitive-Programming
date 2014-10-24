#include<stdio.h>
int main()
{
    long long int t,n,i,count[2],total;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        long long int a[n];
        count[0]=0;
        count[1]=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            if(a[i]==1 || a[i]==0)
            count[0]++;
            if(a[i]==2)
            count[1]++;
        }
        n=n-count[0];
        total=((n*(n-1))/2)-((count[1]*(count[1]-1))/2);
        printf("%lld\n",total);
    }
    return 0;
}
