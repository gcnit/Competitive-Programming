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
    ll t,i,n,k,p,flag,flag1,j;
    scan(t);
    while(t--)
    {
        scan(n);
        scan(k);
        scan(p);
        ll a[k],b[k],c[p],d[p];
        for(i=0;i<k;i++)
        {
            scan(a[i]);
            scan(b[i]);
        }
        for(i=0;i<p;i++)
        {
            scan(c[i]);
            scan(d[i]);
        }
        mergesort(a,b,0,k-1);
        mergesort(c,d,0,p-1);
        flag1=1;
        for(i=0;i<k;i++)
        {
            flag=0;
            for(j=0;j<p;j++)
            {
                if(c[j]<=d[j])
                {
                    if(a[i]<=b[i])
                    {
                        if(a[i]>=c[j] && b[i]<=d[j])
                        {
                            flag=1;
                            break;
                        }
                    }
                }
                else
                {
                    if(a[i]<=b[i])
                    {
                        if(b[i]<=d[j] || a[i]>=c[j])
                        {
                            flag=1;
                            break;
                        }
                    }
                    else
                    {
                        if(a[i]>=c[j] && b[i]<=d[j])
                        {
                            flag=1;
                            break;
                        }
                    }
                }
            }
            if(flag==0)
            {
                printf("No\n");
                flag1=0;
                break;
            }
        }
        if(flag1)
        printf("Yes\n");
    }
    return 0;
}
