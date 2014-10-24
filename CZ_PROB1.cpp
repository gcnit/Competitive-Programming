#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll isprime(ll a)
{
    ll i;
    if(a==2 || a==3)
    return 1;
    if(a==1 || a==0)
    return 0;
    for(i=2;i<=sqrt(a);i++)
    {
        if(isprime(i))
        if(a%i==0)
        return 0;
    }
    return 1;
}
int main()
{
    ll a[8000],i,j,sum,k=0,sp[510],t,n;
    for(i=2;i<7994;i++)a[i]=0;
    for(i=1;i<90;i++)
    {
        for(j=i;j<90;j++)
        {
            sum=i*i+j*j;
            if(sum>=7994)
            break;
            if(!a[sum])
            if(isprime(sum))
            {
                sp[k++]=sum;
                a[sum]=1;
            }
        }
    }
    sort(sp,sp+k);
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&k);
        n=sp[n-1];
        printf("%lld\n",n);
        a[1]=1;
        for(i=2;i<=k;i++)
        {
            a[i]=a[i-1]+i;
        }
    }
}
