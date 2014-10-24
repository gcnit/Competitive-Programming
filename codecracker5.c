#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define gc getchar
#define ll long long int
#define M 1000000007
#define scan(t) t=input()
#define print(n) printf("%lld\n",n)
#define scans(s) scanf("%s",s)
#define nl printf("\n")
#define loop(start,k,end) for(k=start;k<end;k++)
#define ascan(a,i,l) for(i=0;i<l;i++) scan(a[i])
#define aprint(a,i,l) for(i=0;i<l;i++) print(a[i])
#define atprint(a,i,l) for(i=0;i<l;i++) printf("%lld ",a[i]); nl
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
void merge(ll * ,ll *,ll ,ll ,ll );
void mergesort(ll *a,ll *b,ll lb,ll ub)
{
    ll mid=(lb+ub)/2;
    if(lb<ub)
    {
        mergesort(a,b,lb,mid);
        mergesort(a,b,mid+1,ub);
        merge(a,b,lb,mid,ub);
    }
}
void merge(ll *a,ll *b,ll lb,ll mid,ll ub)
{
    ll c[ub-lb+1],d[ub-lb+1];
    ll i=0,lp=lb,up=mid+1;
    while(lp<=mid&&up<=ub)
    {
        if(a[lp]<a[up])
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
    ll j;
    for(j=0;j<i;j++)
    {
    b[j+lb]=d[j];
    a[j+lb]=c[j];
    }
    return;
}
int main()
{
    ll t,n,min,x,y,i;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        ll a[n],b[n];
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
        mergesort(a,b,0,n-1);
        min=1000000001;
        for(i=0;i<n-1;i++)
        {
            if(a[i+1]-a[i]<min)
            {
                min=a[i+1]-a[i];
            }
        }
        printf("%lld\n",min);
    }
    return 0;
}
