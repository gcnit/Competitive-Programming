#include<stdio.h>
#define ll long long int
ll b[1000010];
int main()
{
    ll j=0,i,x,t,n,flag,y;
    for(i=0;i<=1000000;i++)
    {
        b[i]=i*i;
    }
    scanf("%lld",&t);
    while(t--)
    {
        flag=0;
        scanf("%lld",&n);
        x=sqrt(n);
        y=sqrt(n/2);
        for(i=x;i>=y;i--)
        {
            x=sqrt(n-b[i]);
            if(x*x==(n-b[i]))
            {
                flag=1;
                break;
            }
        }
        if(flag)printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
