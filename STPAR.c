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
    ll n;
    while(1)
    {
    scanf("%lld",&n);
    if(n==0)
    break;
    ll a[n],b[n],i,j=1,count=0,k=-1,l;;
    for(i=0;i<n;i++)
    scan(a[i]);
    i=0;
    while(1)
    {
        if(i<n)
        if(a[i]==j)
        {
            j++;
            i++;
            count++;
        }
        else
        {
            b[++k]=a[i++];
        }
        if(k>=0)
        {
            while(b[k]==j)
            {
                k--;
                j++;
                count++;
                if(k==-1)
                break;
            }
        }
        if(count==n)
        {
            printf("yes\n");
            break;
        }
        else if(i==n && b[k]!=j)
        {
            printf("no\n");
            break;
        }
    }
    }
    return 0;
}
