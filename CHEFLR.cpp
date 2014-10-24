#include<cstdio>
#include<string.h>
#define M 1000000007
using namespace std;

int main()
{
    long long int t,x,i,l;
    char s[100010];
    scanf("%lld",&t);
    while(t--)
    {
        x=1;
        scanf("%s",s);
        l=strlen(s);
        for(i=2;i<=l+1;i++)
        {
           x*=2;
           if(i%2)
           x--;
           if(s[i-2]=='r')
           x+=2;
           x%=M;
        }
        printf("%lld\n",x);
    }
    return 0;
}
