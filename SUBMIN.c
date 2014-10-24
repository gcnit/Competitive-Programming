#include<stdio.h>
int main()
{
    long long int n,i,q,k,j,l,h;
    scanf("%lld",&n);
    long long int a[n],x[n][2];
    for(i=0;i<n;i++)
    scanf("%lld",&a[i]);
    scanf("%lld",&q);
    while(q--)
    {
        long long int sum=0;
        scanf("%lld",&k);
        for(i=0;i<n;i++)
        {
            x[i][0]=0;
            x[i][1]=0;
        }
        j=0;
        l=0;
        for(h=0;h<n;h++)
        {
            if(a[h]!=k)
            continue;
            else
            {
                x[h][0]=1;
                x[h][1]=1;
                for(i=h+1;i<n;i++)
                {
                    if(a[i]>=a[h])
                    x[h][1]++;
                    else
                    break;
                }
                for(i=h-1;i>=0;i--)
                {
                    if(a[i]>a[h])
                    x[h][0]++;
                    else
                    break;
                }
            }
        }
        for(i=0;i<n;i++)
        sum+=x[i][0]*x[i][1];
        printf("%lld\n",sum);
    }
return 0;
}
