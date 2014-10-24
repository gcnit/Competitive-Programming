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
    ll t,i,n,j,k,l,count,countb,flag,x,ai,aj,z;
    scan(t);
    loop(1,z,t+1)
    {
        scan(n);
        char a[n+5][n+5];
        loop(0,i,n)
        scans(a[i]);
        count=0;
        loop(0,i,n)
        {
            loop(0,j,n)
            {
                if(a[i][j]=='#')
                count++;
            }
        }
        x=sqrt(count);
        countb=0;
        flag=0;
        if(count/x==x)
        {
            loop(0,i,n)
            {
                loop(0,j,n)
                {
                    if(a[i][j]=='#')
                    {
                        ai=i;
                        aj=j;
                        flag=1;
                        break;
                    }
                }
                if(flag=1)
                break;
            }
            loop(0,k,x)
            {
                loop(0,l,x)
                {
                    if(a[ai+k][aj+l]=='#')
                    countb++;
                }
            }
            if(countb==count)
            printf("Case #%lld: YES",z);
            else
            printf("Case #%lld: NO",z);
        }
        else printf("Case #%lld: NO",z);
    }
        return 0;
}
