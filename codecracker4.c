#include<stdio.h>
long long int a[100000];
int main()
{
    long long int t,i,j,n,m,v,l,r,count;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&m);
        for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
        for(i=0;i<m;i++)
        {
            count=0;
            scanf("%lld %lld %lld",&v,&l,&r);
            for(j=l-1;j<r;j++)
            if(a[j]==v)
            count++;
            if(count==0)
            printf("No 0\n");
            else
            printf("Yes %lld\n",count);
        }
    }
    return 0;
}
