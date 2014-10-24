#include<iostream>
#include<cstdio>
#define ll long long int
#define M 1000000007
using namespace std;

int rec(int x,int n)
{
    printf("%lld",x);
    for(i=n;i>=1;i--)
    {
        return rec(i,n);
    }
}

int main()
{
    ll i,n;
    char a[10100];
    scanf("%lld",&n);
    while(n--)
    scanf("%s",&a);
    printf("0\n");
    return 0;
}
