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
    ll t,ng,nm,j,k,i;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&ng,&nm);
        ll g[ng],m[nm];
        for(i=0;i<ng;i++)
        scanf("%lld",&g[i]);
        mergesort(g,0,ng-1);
        for(i=0;i<nm;i++)
        scanf("%lld",&m[i]);
        mergesort(m,0,nm-1);
        j=0;
        k=0;
        while(1)
        {
            if(g[j]>=m[k])
            k++;
            else
            j++;
            if(j==ng)
            {
                printf("MechaGodzilla\n");
                break;
            }
            if(k==nm)
            {
                printf("Godzilla\n");
                break;
            }
        }

    }
    return 0;
}
