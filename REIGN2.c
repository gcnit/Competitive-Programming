#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define gc getchar
#define ll long long int
#define M 1000000007
#define BIG 1000000000
#define SMALL -1000000000
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
int main()
{
    ll t,i,n,k,flag,max,neg;
    scan(t);
    while(t--)
    {
    neg=0;
    scan(n);
    scan(k);
    ll a[n],c[n],d[n],e[n],f[n];
    for(i=0;i<n;i++)
    {
        flag=0;
        scanf("%lld",&a[i]);
        if(i==0)
        {
            c[i]=a[i];
            neg=0;
        }

        else
        {
            c[i]=c[i-1];
            if(c[i]<c[i]+a[i]+neg)
            {
                c[i]+=a[i]+neg;
                neg=0;
            }
	    if(a[i]<0)
	    neg+=a[i];
            if(c[i]<a[i])
            {
                c[i]=a[i];
                neg=0;
            }

        }

    }
    neg=0;
    for(i=n-1;i>=0;i--)
    {
        flag=0;
        if(i==n-1)
        {
            d[i]=a[i];
            neg=0;
        }

        else
        {
            d[i]=d[i+1];
            if(d[i]<d[i]+a[i]+neg)
            {
                d[i]+=a[i]+neg;
                neg=0;
            }
            if(a[i]<0)
            neg+=a[i];
            if(d[i]<a[i])
            {
                d[i]=a[i];
                neg=0;
            }

        }

    }
    for(i=n-1;i>k;i--)
    {
        d[i]+=c[i-1-k];
        if(i==n-1)
        max=d[i];
        if(d[i]>max)
        max=d[i];
    }
    print(max);
    }
    return 0;
}
