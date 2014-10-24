#include<stdio.h>
int main()
{
    long long int t,j,ans,n;
    char c;
    scanf("%lld",&t);
    while(t--)
    {
        j=0;
        ans=0;
        c='+';
        while(1)
        {
            scanf("%lld",&n);
            if(c=='+')
            ans+=n;
            else if(c=='-')
            ans-=n;
            else if(c=='*')
            ans*=n;
            else if(c=='/')
            ans/=n;
            c=getchar();
            while(c<'*' || c>'=')
            c=getchar();
            if(c=='=')
            {
                printf("%lld\n",ans);
                break;
            }
        }
    }
    return 0;
}
