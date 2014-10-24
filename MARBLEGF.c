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
    ll i,n,q,j,c[1000],x,y,sum=0;
    char op,z;
    scan(n);
    scan(q);
    ll a[n];
    loop(0,i,(n/1000)+1)
    {
        c[i]=0;
    }
    loop(0,i,n)
    {
        scan(a[i]);
        c[i/1000]+=a[i];
    }
    loop(0,i,q)
    {
        op=gc();
        while(op<'A'||op>'Z')
        {
            op=gc();
        }
        scan(x);
        scan(y);
        if(op=='G')
        {
            a[x]+=y;
            c[x/1000]+=y;
        }
        else if(op=='T')
        {
            a[x]-=y;
            c[x/1000]-=y;
        }
        else if(op=='S')
        {
            if(y-x<1000)
            {
                loop(x,j,y+1)
                sum+=a[j];
                print(sum);
                sum=0;
            }
            else
            {
                loop(x/1000,j,(y/1000)+1)
                {
                    sum+=c[j];
                }
                if(x%1000!=0)
                loop((x/1000)*1000,j,x)
                {
                    sum-=a[j];
                }
                if(y%1000!=999)
                loop(y+1,j,((((y/1000)+1)*1000)))
                {
                    sum-=a[j];
                }
                print(sum);
                sum=0;
            }
        }
    }
    return 0;
}
