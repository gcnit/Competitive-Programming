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

ll gcd(ll a,ll b){
    if(b>a)
        return gcd(b,a);
    if(b==0)
        return a;
    return gcd(b,a%b);
}
ll a[100100],c[100000],k=0;
ll sieve()
{
    ll i,j;
    for(i=2;i<=100000;i++)
    a[i]=1;
    a[0]=0;
    a[1]=0;
    for(i=2;i<=100000;i++)
    {
        if(a[i])
        {
            c[k++]=i;
            for(j=i*2;j<=100000;j+=i)
            {
                a[j]=0;
            }
        }
    }
}

int main()
{
    long long int t,n,i,m,b;
    sieve();
    scanf("%lld",&t);
    while(t--)
    {
        ll flag=1;
        scanf("%lld",&n);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&b);
            if(b!=1)
            flag=0;
            if(i==0)
            m=b;
            else
            m=gcd(b,m);
        }
        if(flag) printf("-1\n");
        else if(a[m]) printf("%lld\n",m);
        else if(m%2==0) printf("2\n");
        else
        {
            for(i=0;i<k;i++)
            if(m%c[i]==0)
            {
                printf("%lld\n",c[i]);
                flag=1;
                break;
            }
            if(!flag)
            printf("-1\n");
        }
    }
    return 0;
}
