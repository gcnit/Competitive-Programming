#include<iostream>
#include<cstdio>
#include<string.h>
#define ll long long int

using namespace std;

int main()
{
    ll t,i,l;
    char s[200];
    scanf("%lld",&t);
    while(t--)
    {
        int flag=0;
        scanf("%s",s);
        l=strlen(s);
        for(i=1;i<l;i++)
        if(s[i]==s[i-1])
        {
            flag=1;
            break;
        }
        if(flag) printf("SLAP\n");
        else printf("KISS\n");
    }
    return 0;
}
