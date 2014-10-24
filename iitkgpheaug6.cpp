#include<iostream>
#include<cstdio>
#define ll long long int
#define M 1000000007
using namespace std;

ll a[1000100];
int main()
{
    ll i,n,q,x,y;
    scanf("%lld %lld",&x,&y);
    a[0]=1;
    for(i=1;i<=1000000;i++)
    a[i]=((x*a[i-1])-y)%M;
    scanf("%lld",&q);
    while(q--)
    {
        scanf("%lld",&n);
        printf("%lld\n",a[n]);
    }
    return 0;
}
