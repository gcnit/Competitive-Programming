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
    ll a,d,i,min,min1,min2;
    while(1)
    {
        min2=0;
        scanf("%lld %lld",&a,&d);
        if(!a && !d)
        break;
        ll na[a],nd[d];
        for(i=0;i<a;i++)
        {
            scanf("%lld",&na[i]);
        }
        mergesort(na,0,a-1);
        for(i=0;i<d;i++)
        {
            scanf("%lld",&nd[i]);
        }
        mergesort(nd,0,d-1);
        if(na[0]<nd[1])
        printf("Y\n");
        else printf("N\n");
    }
    return 0;
}
