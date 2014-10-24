#include<iostream>
#include<cstdio>
#define ll long long int

using namespace std;

int main()
{
    ll t,d,ans,i;
    char s[3][5]={"SL","LB","BS"};
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&d);
        ans=0;
        for(i=1;;i++)
        {
            ans+=i;
            if(ans>=d)
            {
                d=i;
                break;
            }
        }
        printf("%s\n",s[d%3]);
    }
    return 0;
}
