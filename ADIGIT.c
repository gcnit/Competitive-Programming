#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define gc getchar
#define ll long long int
#define M 1000000007
#define scan(t) t=input()
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
ll b[100000][10];
int main()
{
    ll n,m,i,j,sum,x,y;
    char a[100100];
    scan(n);
    scan(m);
    scanf("%s",a);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=9;j++)
        b[i][j]=0;
        b[i][a[i]-'0']++;
        if(i)
        for(j=0;j<=9;j++)
        {
            b[i][j]+=b[i-1][j];
        }
    }
    for(i=0;i<m;i++)
    {
        scan(x);
        y=a[x-1]-'0';
        sum=0;
        for(j=0;j<y;j++)
        sum+=(y-j)*b[x-1][j];
        for(j=9;j>y;j--)
        sum+=b[x-1][j]*(j-y);
        printf("%lld\n",sum);
    }
    return 0;
}
