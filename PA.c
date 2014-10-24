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
    ll t,i,l,one;
    char s[35];
    while(1)
    {
    scanf("%s",s);
    if(s[0]=='#')
    break;
    one=0;
    l=strlen(s);
    for(i=0;i<l-1;i++)
    {
        if(s[i]=='1')
        one++;
    }
    if(s[l-1]=='e')
    {
      if(one%2==1)
      s[l-1]='1';
      else
      s[l-1]='0';
    }
    else if(s[l-1]=='o')
    {

      if(one%2==1)
      s[l-1]='0';
      else
      s[l-1]='1';
    }
    printf("%s\n",s);
    }
    return 0;
}
