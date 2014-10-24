#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define ll long long int
void merge(ll * ,ll ,ll ,ll );
void mergesort(ll *a,ll lb,ll ub)
{
    ll mid=(lb+ub)/2;
    if(lb<ub)
    {
        mergesort(a,lb,mid);
        mergesort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}
void merge(ll *a,ll lb,ll mid,ll ub)
{
    ll c[ub-lb+1];
    ll i=0,lp=lb,up=mid+1;
    while(lp<=mid&&up<=ub)
    {
        if(a[lp]<a[up])
        {
            c[i++]=a[lp++];
        }
        else
        {
            c[i++]=a[up++];
        }
    }
    while(lp<=mid)
    c[i++]=a[lp++];
    while(up<=ub)
    c[i++]=a[up++];
    ll j;
    for(j=0;j<i;j++)
    a[j+lb]=c[j];
    return;
}
long long int a[1005],b[1005][1005],c[1005][1005],max[1005],diff[1005];
int main()
{
    long long int t,i,n,m,k,j,sum,count;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld %lld",&n,&m,&k);


        for(i=0;i<n;i++)
        scanf("%lld",&a[i]);

        for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        scanf("%lld",&b[i][j]);

        for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        scanf("%lld",&c[i][j]);

        sum=0,count=0;

        for(i=0;i<n;i++)
        {
            max[i]=b[i][a[i]-1];
            sum+=max[i];
            for(j=0;j<m;j++)
            {
                if(b[i][j]-c[i][j]>max[i])
                {
                    max[i]=b[i][j]-c[i][j];
                }
            }
            diff[i]=max[i]-b[i][a[i]-1];
        }

        mergesort(diff,0,n-1);

        for(i=n-1;i>=0 && count<k;i--)
        {
            sum+=diff[i];
            count++;
        }

        printf("%lld\n",sum);
    }
    return 0;
}
