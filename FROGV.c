#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define gc getchar
#define ll long long int
#define M 1000000007
void merge(ll * ,ll *,ll ,ll ,ll );
void mergesort(ll *a,ll *e,ll lb,ll ub)
{
    ll mid=(lb+ub)/2;
    if(lb<ub)
    {
        mergesort(a,e,lb,mid);
        mergesort(a,e,mid+1,ub);
        merge(a,e,lb,mid,ub);
    }
}
void merge(ll *a,ll *e,ll lb,ll mid,ll ub)
{
    ll c[ub-lb+1],d[ub-lb+1];
    ll i=0,lp=lb,up=mid+1;
    while(lp<=mid&&up<=ub)
    {
        if(a[lp]<a[up])
        {
            d[i]=e[lp];
            c[i++]=a[lp++];
        }
        else
        {
            d[i]=e[up];
            c[i++]=a[up++];
        }
    }
    while(lp<=mid)
    {
        d[i]=e[lp];
        c[i++]=a[lp++];
    }
    while(up<=ub)
    {
        d[i]=e[up];
        c[i++]=a[up++];
    }
    ll j;
    for(j=0;j<i;j++)
    {
        e[j+lb]=d[j];
        a[j+lb]=c[j];
    }
    return;
}
ll a[100010],b[100010],d[100010],e[100010];
int main()
{
    ll n,k,p,i,x,y,min,max;
    scanf("%lld %lld %lld",&n,&k,&p);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        b[i]=a[i];
        e[i]=i;
    }
    mergesort(b,e,0,n-1);
    for(i=0;i<n;i++)
    printf("%lld\t",e[i]);
    for(i=0;i<n;i++)
    {
        d[e[i]]=i;
        e[i]=i;
    }
    for(i=n-2;i>=0;i--)
    {
        if(b[i+1]-b[i]<=k)
        {
            e[i]=e[i+1];
        }
    }
    while(p--)
    {
        scanf("%lld %lld",&x,&y);
        x--;
        y--;
        if(d[x]<d[y])
        {
            min=d[x];
            max=d[y];
        }
        else
        {
            min=d[y];
            max=d[x];
        }
        if(e[min]>=max)
        printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
