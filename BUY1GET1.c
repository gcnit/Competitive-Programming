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
    ll t,i,l,sum,count[52];
    char s[210];
    scan(t);
    while(t--)
    {
        scanf("%s",s);
        l=strlen(s);
        sum=0;
        for(i=0;i<52;i++)
        count[i]=0;
        for(i=0;i<l;i++)
        {
            if(s[i]>='a' && s[i]<='z')
            count[s[i]-'a']++;
            else count[s[i]-'A'+26]++;
        }
        for(i=0;i<52;i++)
        sum+=(count[i]+1)/2;
        print(sum);
    }
    return 0;
}
