#include<stdio.h>
#include<math.h>
#define ll long long int
ll a[100000];
ll sieve()
{
    ll i,j;
    for(i=2;i<100000;i++)
    a[i]=1;
    a[0]=0;
    a[1]=0;
    for(i=2;i<100000;i++)
    {
        if(a[i])
        {
            for(j=i*2;j<100000;j+=i)
            {
                a[j]=0;
            }
        }
    }
}
ll segsieve(ll m,ll n)
{
    ll b[n-m+10],q,x,i,j;
    for(i=0;i<=n-m;i++)
    b[i]=1;
    if(m==1)
    b[0]=0;
    q=sqrt(n);
    for(i=2;i<=q;i++)
    {
        x=(m/i);
        x*=i;
        if(i>=x)
        x=i*2;
        for(j=x;j<=n;j+=i)
        {
           if(j>=m)
           b[j-m]=0;
        }
    }
    for(i=m;i<=n;i++)
    if(b[i-m])
    printf("%lld\n",i);
    printf("\n");
}

int main()
{
    ll t,m,n;
    sieve();
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&m,&n);
        segsieve(m,n);
    }
    return 0;
}
