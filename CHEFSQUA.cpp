#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll a[4000000][8];

ll binsearch(ll x1,ll y1,ll* x,ll* y,ll lb,ll ub,ll count1)
{
    if(lb>=ub)
        return count1;
    ll mid=(lb+ub)/2;
    if(x[mid]<x1)
        return binsearch(x1,y1,x,y,mid+1,ub,count1);
    else if(x[mid]>x1)
        return binsearch(x1,y1,x,y,lb,mid,count1);
    else if(x[mid]==x1)
    {
        if(y[mid]==y1) return count1+1;
        else if(y[mid]<y1)
            return binsearch(x1,y1,x,y,mid+1,ub,count1);
        else if(y[mid]>y1)
            return binsearch(x1,y1,x,y,lb,mid,count1);
    }
}


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
int main()
{
    ll n,i,tmp,k,j,tmpx,tmpy,max1,count1;
    scanf("%lld",&n);
    ll x[n],y[n],temp[n];
    for(i=0;i<n;i++)
        scanf("%lld %lld",&x[i],&y[i]);
    if(n==0 || n==1)
    {
        printf("%lld\n",4-n);
        exit(0);
    }
    mergesort(x,y,0,n-1);
    tmp=x[0];
    temp[0]=-1;
    k=1;
    for(i=1;i<n;i++)
        if(x[i]!=tmp)
        {
            temp[k++]=i-1;
            tmp=x[i];
        }
    temp[k]=n-1;
    for(i=1;i<=k;i++)
        mergesort(y,x,temp[i-1]+1,temp[i]);
    k=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((x[i]==x[j])&&(y[i]==y[j]))
                continue;
            tmpx=y[i]-y[j];
            tmpy=x[i]-x[j];
            a[k][0]=x[i]+tmpx;
            a[k][1]=y[i]-tmpy;
            a[k][2]=x[j]+tmpx;
            a[k][3]=y[j]-tmpy;
            a[k][4]=x[i]-tmpx;
            a[k][5]=y[i]+tmpy;
            a[k][6]=x[j]-tmpx;
            a[k][7]=y[j]+tmpy;
            k++;
        }
    }
    max1=0;
    for(i=0;i<k;i++)
    {
        count1=0;
        count1=binsearch(a[i][0],a[i][1],x,y,0,n-1,count1);
        count1=binsearch(a[i][2],a[i][3],x,y,0,n-1,count1);
        if(count1>max1) max1=count1;
        if(max1==2) break;
        count1=0;
        count1=binsearch(a[i][4],a[i][5],x,y,0,n-1,count1);
        count1=binsearch(a[i][6],a[i][7],x,y,0,n-1,count1);
        if(count1>max1) max1=count1;
        if(max1==2) break;
    }
    printf("%lld\n",2-max1);
    return 0;
}
