#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define gc getchar
#define ll long long int
#define M 1000000009
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

ll pw(ll a, ll b){
  ll r;
  if(b==0) return 1;
  r = pw(a,b/2);
  r = (r*r)%M;
  if(b%2) r = (r*a)%M;
  return r;
}
ll min(ll a,ll b)
{
    if(a<=b)
    return a;
    else
    return b;
}
ll max(ll a,ll b)
{
    if(b<=a)
    return a;
    else
    return b;
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
ll comb(ll n,ll r)
{
    ll product,i;
    if(n==0 || n==1)
    return 1;
    if(r>n/2)
    r=n-r;
    for(i=n-r+1;i<=n;i++)
    {
        product*=i;
    }
    for(i=1;i<=r;i++)
    {
        product*=pw(i,M-2);
    }
    return product;
}
int main()
{
    ll n,i,t,j,q,m,ans;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&q);
        ll a[n],c[n+1];
        for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
        while(q--)
        {
            scanf("%lld",&m);
            ll S[n+1][m];
            for(i=0;i<n;i++)
            {
                c[i+1]=a[i]%m;
                if(c[i+1]<=0)
                c[i+1]+=m;
            }
            for (i = 0; i <= n; i ++)
            S [i] [0] = 1;
            for (j = 1; j <= m; j ++)
            S [0] [j] = 0;
            for (i = 1; i <= n; i ++)
            for (j = 1; j <= m; j ++)
            {
            S [i] [j] = S [i - 1] [j]|| (c [i] <= j && S [i - 1] [j - c [i]]);
            printf("%lld %lld %lld\n",i,j,S[i][j]);
            }
            j = m;
for (i = n; i >= 1; i --)
printf("%lld\n",c[i]);
for (i = n; i >= 1; i --)
if (! S [i - 1] [j])
{
printf ("Use item %lld = %lld\n", i, c [i]);
j -= c [i];
}
        }

    }
        return 0;
}
