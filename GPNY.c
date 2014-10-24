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
int main()
{
    ll t,i,n,x;
    scan(t);
    while(t--)
    {
        scan(n);
        ll a[n+1],b[n+1],c[n+1],big=1000000000,Gopalency=0,GPNY=0,max=0,min=big;
        loop(0,i,n+1)
        {
            scan(a[i]);
            scan(c[i]);
            if(i==0)
            x=3*a[i];
            if(x-(c[i]+a[i])>=0)
            b[i]=x-(c[i]+a[i]);
            else
            {
                b[i]=0;
                x=a[i]+b[i]+c[i];
            }
        }
        loop(0,i,n+1)
        {
            if(b[i]==0)
            {
                min=big;
                max=0;
                continue;
            }
            if(b[i]<min)
            {
                min=b[i];
                max=0;
            }
            else if(b[i]>max)
            {
                max=b[i];
                GPNY=max-min;
                if(GPNY>Gopalency && min!=big)
                {
                    Gopalency=GPNY;
                }
            }
        }
        print(Gopalency);
    }
    return 0;
}
