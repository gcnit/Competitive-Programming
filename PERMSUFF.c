#include<stdio.h>
#define ll long long int
void merge(long long int * ,long long int *,long long int ,long long int ,long long int );
void mergesort(long long int *a,long long int *b,long long int lb,long long int ub)
{
    long long int mid=(lb+ub)/2;
    if(lb<ub)
    {
        mergesort(a,b,lb,mid);
        mergesort(a,b,mid+1,ub);
        merge(a,b,lb,mid,ub);
    }
}
void merge(long long int *a,long long int *b,long long int lb,long long int mid,long long int ub)
{
    long long int c[ub-lb+1],d[ub-lb+1];
    long long int i=0,lp=lb,up=mid+1;
    while(lp<=mid&&up<=ub)
    {
        if(a[lp]<=a[up])
        {
            d[i]=b[lp];
            c[i++]=a[lp++];
        }
        else
        {
            d[i]=b[up];
            c[i++]=a[up++];
        }
    }
    while(lp<=mid)
    {
        d[i]=b[lp];
        c[i++]=a[lp++];
    }
    while(up<=ub)
    {
        d[i]=b[up];
        c[i++]=a[up++];
    }
    long long int j;
    for(j=0;j<i;j++)
    {
        a[j+lb]=c[j];
        b[j+lb]=d[j];
    }
    return;
}

int main()
{
    ll t,i,n,k,tmp;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&k);
        ll a[n+10],b[2*k+10],c[n+10],d[2*k+10],e[n+10][2];
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            c[i]=i+1;
            e[i+1]=i+1;
        }
        for(i=0;i<k;i++)
        {
            scanf("%lld %lld",&b[i],&d[i]);
            if(d[i]<b[i])
            {
                tmp=b[i];
                b[i]=d[i];
                d[i]=tmp;
            }
        }

        mergesort(a,c,0,n-1);
        mergesort(b,d,0,k-1);
        max=-1;
        min=n+1;
        j=-1;
        for(i=0;i<k;i++)
        {
            if(b[i]>max)
            {
                e[++j][0]=b[i];
                e[j][1]=d[i];
                max=d[i];
            }
            else if(d[i]>=max)
            {
                e[j][1]=d[i];
                max=d[i];
            }
        }
        for(i=0;i<n;i++)
        {
            if(e[][0]>=)
        }
    }
    return 0;
}
