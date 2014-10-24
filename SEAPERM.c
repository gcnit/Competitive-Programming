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
    ll t,i,n,k,s,j,x,y,m,l,q;
    scan(t);
    while(t--)
    {
        scan(n);
        ll a[n],b[n],c;
        scan(k);
        scan(s);
        for(i=0;i<n;i++)
        {
            scan(a[i]);
            b[i]=i+1;
        }
        mergesort(a,b,0,n-1);
        for(i=1;i<k-1 && a[i]<=s;i+=2)
        {
            if(i==1)
            {
                c=b[i];
                b[i]=b[i-1];
                b[i-1]=c;
            }
            else if(a[i-2]+a[i]<=s)
            {
                c=b[i];
                b[i]=b[i-1];
                b[i-1]=c;
            }
        }
        for(i=0;i<n;i++)
        {
            printf("%lld",b[i]);
            if(i!=n-1)
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
