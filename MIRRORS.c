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
    ll t,i,j,n,m;
    scan(t);
    while(t--)
    {
    scan(n);
    scan(m);
    char a[n+10][m+10],x;
    for(i=0;i<n;i++)
    scanf("%s",a[i]);
    for(i=0;i<n;i++)
    for(j=0;j<m/2;j++)
    {
        x=a[i][j];
        a[i][j]=a[i][m-1-j];
        a[i][m-1-j]=x;
    }
    for(i=0;i<n;i++)
    printf("%s\n",a[i]);
    }
    return 0;
}
