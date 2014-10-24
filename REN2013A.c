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
ll con(char *a,ll l,ll max)
{
    ll x=0,i;
    for(i=0;i<l;i++)
    {
        x+=(a[i]-'0');
        if(i<l-1)
        x*=max;
    }
    return x;
}
int main()
{
    ll t,l1,l2,max1,max2,i,x,y;
    char a[10],b[10];
    scan(t);
    while(t--)
    {
        scanf("%s %s",a,b);
        l1=strlen(a);
        l2=strlen(b);
        for(i=0;i<l1;i++)
        {
            if(i==0)
            max1=a[i]-'0';
            else if(a[i]-'0'>max1)
            max1=a[i]-'0';
        }
        for(i=0;i<l2;i++)
        {
            if(i==0)
            max2=b[i]-'0';
            else if(b[i]-'0'>max2)
            max2=b[i]-'0';
        }
        max1++;
        max2++;
        x=con(a,l1,max1);
        y=con(b,l2,max2);
        printf("%lld\n",x+y);
    }
    return 0;
}
