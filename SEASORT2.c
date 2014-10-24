#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define gc getchar
#define ll long long int
#define M 1000000007
#define scan(t) t=input()
inline ll input() {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  ll ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}
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
int main()
{
    ll n,i,a[10000],b[10000],j,k,l[10000],r[10000],c;
    scan(n);
    ll max,min,maxi=0,mini=0;
    for(i=0;i<n;i++)
    {
        scan(a[i]);
        if(i==0)
        {
            max=a[i];
            min=a[i];
        }
        else
        {
            if(a[i]>max)
            {
                max=a[i];
                maxi=i;
            }
            if(a[i]<min)
            {
                min=a[i];
                mini=i;
            }
        }
        b[i]=a[i];
    }
    mergesort(b,0,n-1);
    k=0;
    if(maxi<mini)
    {
        l[k]=maxi+1;
        r[k]=mini+1;
        k++;
    }
    for(j=l[k-1]-1;j<=(l[k-1]-1+r[k-1]-1)/2;j++)
    {
        c=a[r[k-1]-1-(j-l[k-1]+1)];
        a[r[k-1]-1-(j-l[k-1]+1)]=a[j];
        a[j]=c;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
        for(j=i;j<n;j++)
        if(a[j]==b[i])
        {
            l[k]=i+1;
            r[k]=j+1;
            k++;
            break;
        }
        for(j=l[k-1]-1;j<=(l[k-1]-1+r[k-1]-1)/2;j++)
        {
            c=a[r[k-1]-1-(j-l[k-1]+1)];
            a[r[k-1]-1-(j-l[k-1]+1)]=a[j];
            a[j]=c;
        }
        }
    }
    printf("%lld\n",k);
    for(i=0;i<k;i++)
    printf("%lld %lld\n",l[i],r[i]);
    return 0;
}
