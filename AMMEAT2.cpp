#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t,n,k,i;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&k);
        if(k>n/2)
            printf("-1\n");
        {
            for(i=2;i<=2*k;i+=2)
            {
                printf("%lld ",i);
            }
            printf("\n");
        }
    }
    return 0;
}
