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
ll pw(ll a, ll b){
  ll r;
  if(b==0) return 1;
  r = pw(a,b/2);
  r = (r*r);
  if(b%2) r = (r*a);
  return r;
}
ll a[100010],b[100010];
ll s[100001],prime[100000];
ll sieve()
{
    ll i,j,k=0;
    for(i=2;i<100001;i++)
    s[i]=1;
    s[0]=0;
    s[1]=0;
    for(i=2;i<100001;i++)
    {
        if(s[i])
        {
            for(j=i*2;j<100001;j+=i)
            {
                s[j]=0;
            }
            prime[k++]=i;
        }
    }
}
ll x[100010],list[100010],d[100010];
int main()
{
    ll t,n,i,count,lcm,c,j,sqr,k,powprime;
    sieve();
    scan(t);
    while(t--)
    {
        for(i=0;i<100010;i++)d[i]=0;
        scan(n);
        for(i=1;i<=n;i++)
        {
            scan(a[i]);
            b[i]=n;
            x[i]=0;
        }
        j=0;
        for(i=1;i<=n;i++)
        {
            count=0;
            if(b[i]==-1)
            continue;
            c=a[i];
            while(1)
            {
                count++;
                if(a[i]==a[c])
                break;
                else b[c]=-1;
                c=a[c];
            }
            if(!x[count])
            {
                list[j++]=count;
                x[count]=1;
            }
        }
        for(i=0;i<j;i++)
        {
            if(s[list[i]])
            {
                if(!d[list[i]])
                {
                    d[list[i]]=1;
                }
                continue;
            }
            for(k=0;prime[k]<=list[i];k++)
            {
                count=0;
                if(d[prime[k]])
                {
                    powprime=pw(prime[k],d[prime[k]]);
                    if(list[i]%powprime)
                    continue;
                    else
                    {
                        list[i]/=powprime;
                        count=d[prime[k]];
                    }
                }
                while(list[i]%prime[k]==0)
                {
                    count++;
                    list[i]/=prime[k];
                }
                if(count>d[prime[k]])
                d[prime[k]]=count;
                if(list[i]==1)
                break;
                if(s[list[i]])
                {
                    if(!d[list[i]])
                    {
                        d[list[i]]=1;
                    }
                    break;
                }
            }
        }
        lcm=1;
        for(i=1;i<=n;i++)
        if(d[i])
        {
            lcm=(lcm*pw(i,d[i]))%M;
        }
        printf("%lld\n",lcm);
    }
    return 0;
}

