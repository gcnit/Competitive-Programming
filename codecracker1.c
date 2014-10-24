#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define gc getchar
#define ll long long int
void merge(ll * ,ll *,ll *,ll ,ll ,ll );
void mergesort(ll *a,ll *m,ll *n,ll lb,ll ub)
{
    ll mid=(lb+ub)/2;
    if(lb<ub)
    {
        mergesort(a,m,n,lb,mid);
        mergesort(a,m,n,mid+1,ub);
        merge(a,m,n,lb,mid,ub);
    }
}
void merge(ll *a,ll *m,ll *n,ll lb,ll mid,ll ub)
{
    ll c[ub-lb+1],d[ub-lb+1],e[ub-lb+1];
    ll i=0,lp=lb,up=mid+1;
    while(lp<=mid&&up<=ub)
    {
        if(a[lp]<a[up])
        {
            c[i++]=a[lp++];
            d[i++]=m[lp++];
            e[i++]=n[lp++];
        }
        else
        {
            c[i++]=a[up++];
            d[i++]=m[up++];
            e[i++]=n[up++];
        }
    }
    while(lp<=mid)
    {
        c[i++]=a[lp++];
        d[i++]=m[lp++];
        e[i++]=n[lp++];
    }
    while(up<=ub)
    {
        c[i++]=a[up++];
        d[i++]=m[up++];
        e[i++]=n[up++];
    }
    ll j;
    for(j=0;j<i;j++)
    {
        a[j+lb]=c[j];
        m[j+lb]=d[j];
        n[j+lb]=e[j];
    }
    return;
}
int main()
{
    ll t,n,m,i,a,max,max2,count,maxi,maxj,flag[2];
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&m);
        ll x[m],y[m],z[m];
        for(i=0;i<m;i++)
        {
            scanf("%lld %lld %lld",&x[i],&y[i],&z[i]);
        }
        mergesort(x,y,z,0,m-1);
        for(i=0;i<m;i++)
        {
            printf("%lld %lld %lld\n",x[i],y[i],z[i]);
        }
        a=x[0];
        max=0;
        maxi=a;
        flag[0]=1;
        count=0;
        for(i=0;i<m;i++)
        {
            if(x[i]==a)
            {
                count+=z[i];
            }
            else
            {
                if(count>=max)
                {
                    max=count;
                    maxi=x[i-1];
                }
                count=z[i];
                a=x[i];
            }
        }
        printf("%lld\n",max);
        mergesort(y,x,z,0,m-1);
        flag[1]=1;
        a=y[0];
        max2=0;
        count=0;
        for(i=0;i<m;i++)
        {
            if(y[i]==a)
            {
                count+=z[i];
            }
            else
            {
                if(max2<=count)
                {
                    max2=count;
                    maxj=y[i-1];
                }
                count=z[i];
                a=y[i];
            }
        }
        if(max>max2 & flag[0])
        printf("Row %lld",maxi);
        else if(max2>max & flag[1])
        printf("Column %lld",maxj);
        else
        printf("Bad luck");
    }
}
