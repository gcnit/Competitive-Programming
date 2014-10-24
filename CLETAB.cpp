#include<iostream>
#include<cstdio>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&m);
        for(i=0;i<n;i++)
        table[i]=-1;
        for(i=0;i<m;i++)
        {
            scanf("%lld",&a[i]);
            count[a[i]]++;
        }

    }
    return 0;
}
