#include<iostream>
#include<cstdio>
#define yes printf("YES\n")
#define no printf("NO\n")
using namespace std;

int main()
{
    long long int t,a,b;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&a,&b);
        if((a>=0 && a%2 && b>=1-a && b<=a+1)
        ||(a<0 && !(a%2) && b<=-a && b>=a)
        ||(!(b%2) && b>0 && a>=-b && a<=b-1)
        ||(!(b%2) && b<=0 && a>=b && a<=1-b))
        yes;
        else no;
    }
    return 0;
}
