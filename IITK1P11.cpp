#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        if(n==1 || n==100 || n==1000 || n==10000 || n==100000)
        printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}
