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
ll pw(ll a, ll b){
  ll r;
  if(b==0) return 1;
  r = pw(a,b/2);
  r = (r*r)%M;
  if(b%2) r = (r*a)%M;
  return r;
}

int rev(ll a)
{
    ll b=0,l;
    l=log10(a);
    while(a)
    {
        b+=(a%10)*pw(10,l);
        a=a/10;
        l--;
    }
    return b;
}
ll ispalin(ll a)
{
    ll b[10],i=0,j,c=a;
    while(c)
    {
        b[i]=c%10;
        c/=10;
        i++;
    }
    for(j=0;j<=i/2;j++)
    if(b[j]!=b[i-1-j])
    return 0;
    return 1;
}

int main()
{
    ll t,i,count,n,n1;
    scan(t);
    while(t--)
    {
        count=0;
        scan(n);
        while(1)
        {
            if(ispalin(n))
            break;
            n=rev(n)+n;
            count++;
        }
        printf("%lld %lld\n",count,n);
    }
    return 0;
}
