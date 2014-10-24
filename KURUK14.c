#include<stdio.h>
int main()
{
    long long int t,n,i,a[1010],b[1010],flag;
    scanf("%lld",&t);
    while(t--)
    {
        for(i=0;i<=1000;i++)b[i]=0;
        scanf("%lld",&n);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            b[a[i]]++;
            b[n-1-a[i]]++;
        }
        flag=0;
        for(i=0;i<n;i++)
        if(b[i]!=2)
        {
            printf("NO\n");
            flag=1;
            break;
        }
        if(!flag)
        printf("YES\n");
    }
    return 0;
}
