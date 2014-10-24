#include<bits/stdc++.h>
#define lli long long int
#define pf printf
#define sf scanf
#define sfn(n) scanf("%lld",&n)
#define pfn(n) printf("%lld\n",n)
#define nl printf("\n")
using namespace std;
lli s;
void merg(long long int * ,long long int ,long long int ,long long int );
void mergesort(long long int *a,long long int lb,long long int ub)
{
    long long int mid=(lb+ub)/2;
    if(lb<ub)
    {
        mergesort(a,lb,mid);
        mergesort(a,mid+1,ub);
        merg(a,lb,mid,ub);
    }
}
void merg(long long int *a,long long int lb,long long int mid,long long int ub)
{
    long long int c[ub-lb+1];
    long long int i=0,lp=lb,up=mid+1,k=mid-lb+1;
    while(lp<=mid&&up<=ub)
    {
        if(a[lp]<=a[up])
        {
            c[i++]=a[lp++];
            k--;
        }
        else
        {
            c[i++]=a[up++];
            s+=k;
        }
    }
    while(lp<=mid)
    c[i++]=a[lp++];
    while(up<=ub)
    c[i++]=a[up++];
    long long int j;
    for(j=0;j<i;j++)
    a[j+lb]=c[j];
    return;
}
lli gcd(lli x,lli y){if(y==0)return x;return gcd(y,x%y);}
lli pw(lli x,lli y){if(y==0)return 1;lli z=pw(x,y/2);if(y%2==0)return z*z;return z*z*x;}
int main()
{
    lli n,q,j,i,a[110000],k;
    scanf("%lld",&q);
    for(j=1;j<=q;j++)
    {
        scanf("%lld %lld",&n,&k);
        s=0;
        for(i=0;i<n;i++)
            sf("%lld",&a[i]);
            mergesort(a,0,n-1);
        if(s>k)
        {
            pf("Case %lld: %lld\n",j,s-k);
        }
        else
        {
            if((s-k)%2==0)
                pf("Case %lld: 0\n",j);
            else
                pf("Case %lld: 1\n",j);
        }
    }
    return 0;
}
