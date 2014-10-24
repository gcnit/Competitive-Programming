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
ll a[100010],e[100010],diff[100010],f[100010];
int main()
{
    ll i,n,j;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        e[i]=i;
    }
    if(n==2)
    {
        printf("0\n");
        exit(1);
    }
    mergesort(a,e,0,n-1);
    for(i=n-1;i>=3;i-=4)
    {
        j=i/4;
        diff[j]=a[i]-a[i-1]-a[i-2]+a[i-3];
        if(j==(n-1)/4)
        f[e[i]]=f[e[i-3]]=0,f[e[i-1]]=f[e[i-2]]=1;
        else if(diff[j]*diff[j+1]<0)
        {
            diff[j]=diff[j]+diff[j+1];
            f[e[i]]=f[e[i-3]]=f[e[i+1]],f[e[i-1]]=f[e[i-2]]=f[e[i+2]];
        }
        else
        {
            diff[j]=diff[j]-diff[j+1];
            f[e[i]]=f[e[i-3]]=f[e[i+2]],f[e[i-1]]=f[e[i-2]]=f[e[i+1]];
        }
    }
    if(n%4)
    {
        j=0;
        diff[j]=a[1]-a[0];
        if(n==2)
        f[e[0]]=(e[0]>e[1]),f[e[1]]=(e[0]<e[1]);
        else if(diff[j]*diff[j+1]<0)
        {
            f[e[1]]=f[e[2]],f[e[0]]=f[e[3]];
        }
        else
        {
            f[e[1]]=f[e[3]],f[e[0]]=f[e[2]];
        }
    }
    q[0]=q[1]=0;
    for(i=0;i<n;i++)
    {
        if(i>=n/2)
        {
            temp=e[i]-n/2+1;
            if(f[i])
            q[0]+=temp;
            else q[1]+=temp;
        }
        else
        {
            temp=n/2-e[i];
            q[f[i]]+=temp;
        }
    }
    j=0;
    count0=0
    count1=0;
    if(q[0]<q[1])
    {
        for(i=0;i<n/2;i++)
        {

        }
    }

    return 0;
}
