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
void merge(ll * ,ll * ,ll * ,ll ,ll ,ll );
void mergesort(ll *a,ll *d ,ll *p  ,ll lb,ll ub)
{
    ll mid=(lb+ub)/2;
    if(lb<ub)
    {
        mergesort(a,d,p,lb,mid);
        mergesort(a,d,p,mid+1,ub);
        merge(a,d,p,lb,mid,ub);
    }
}
void merge(ll *a,ll *d ,ll *p  ,ll lb,ll mid,ll ub)
{
    ll c[ub-lb+1],d1[ub-lb+1],p1[ub-lb+1];
    ll i=0,lp=lb,up=mid+1;
    while(lp<=mid&&up<=ub)
    {
        if(a[lp]<a[up])
        {
            d1[i]=d[lp];
            p1[i]=p[lp];
            c[i++]=a[lp++];
        }
        else
        {
            d1[i]=d[up];
            p1[i]=p[up];
            c[i++]=a[up++];
        }
    }
    while(lp<=mid)
    {
        d1[i]=d[lp];
        p1[i]=p[lp];
        c[i++]=a[lp++];
    }
    while(up<=ub)
    {
        d1[i]=d[up];
        p1[i]=p[up];
        c[i++]=a[up++];
    }
    ll j;
    for(j=0;j<i;j++)
    {
        a[j+lb]=c[j];
        d[j+lb]=d1[j];
        p[j+lb]=p1[j];
    }
    return;
}
int main()
{
ll t,k,n,i;
scan(t);
while(t--)
{
    scan(n);
    scan(k);
    ll a[n],d[n],p[n],max,flag,total,j;
    loop(0,i,n)
    {
        scan(a[i]);
        scan(d[i]);
        scan(p[i]);
        if(i==0)
        max=d[i];
        else
        if(max<d[i])
        max=d[i];
    }
    mergesort(a,d,p,0,n-1);
    mergesort(p,a,d,0,n-1);
}
return 0;
}
