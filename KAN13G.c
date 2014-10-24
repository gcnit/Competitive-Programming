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
    long long int t,n,m,i,j,k;
    scanf("%lld",&t);
    for(k=0;k<t;k++)
    {
        printf("Case %lld:\n",k+1);
        scanf("%lld %lld",&n,&m);
        float a[n],c;
        long long int b[n],e,d[n];
        for(i=0;i<n;i++)
        {
            scanf("%f",&a[i]);
        }
        nl;
        for(i=0;i<n;i++)
        {
            b[i]=100*a[i];
            printf("%lld\t",b[i]);
        }
        mergesort(b,0,n-1);
        for(i=0;i<m;i++)
        {
            printf("Scenario %lld:\n",i+1);
            scanf("%f",&c);
            e=c*100;
            for(j=n-1;j>=0;j--)
            {
                d[j]=e/b[j];
                e=e%b[j];
                if(d[j])
                printf("%f %lld\n",a[j],d[j]);
            }
        }
    }
    return 0;
}
