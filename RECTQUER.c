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
ll a[300][300],x[300][300][11],y[300][300][11];
int main()
{
    ll n,i,j,no,k,count,sum[11],q,x1,x2,y1,y2;
    scan(n);
    loop(0,i,300)
    loop(0,j,300)
    loop(0,k,11)
    {
        x[i][j][k]=0;
        y[i][j][k]=0;
    }
    loop(0,i,n)
    loop(0,j,n)
    {
    scan(a[i][j]);
    no=a[i][j];
    if(j!=0)
    loop(0,k,11)
    x[i][j][k]=x[i][j-1][k];
    x[i][j][no]++;
    }
    loop(0,j,n)
    loop(0,i,n)
    {
    if(i==0)
    loop(0,k,11)
    y[i][j][k]=x[i][j][k];
    else
    loop(0,k,11)
    y[i][j][k]=y[i-1][j][k]+x[i][j][k];
    }
    scan(q);
    while(q--)
    {
        scan(x1);
        scan(y1);
        scan(x2);
        scan(y2);
        x1--;
        x2--;
        y1--;
        y2--;
        loop(0,k,11)
        sum[k]=0;
        count=0;
        if(x1!=0 && y1!=0)
        {
        loop(0,k,11)
        sum[k]=y[x2][y2][k]-y[x1-1][y2][k]+y[x1-1][y1-1][k]-y[x2][y1-1][k];
        }
        if(x1==0)
        {
            if(y1==0)
            {
            loop(0,k,11)
            sum[k]=y[x2][y2][k];
            }

            else
            {
            loop(0,k,11)
            sum[k]=y[x2][y2][k]-y[x2][y1-1][k];
            }
            }
            else if(y1==0)
            {
            loop(0,k,11)
            sum[k]=y[x2][y2][k]-y[x1-1][y2][k];
            }

        loop(0,k,11)
        {
            if(sum[k])
            count++;
        }
        print(count);
    }
    return 0;
}
