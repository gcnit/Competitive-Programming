#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,i,a,maxi;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        maxi=-1;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a);
            if(a>maxi)maxi=a;
        }
        printf("%lld\n",maxi);
    }
    return 0;
}
