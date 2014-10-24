#include<stdio.h>
int main()
{
    long long int n,m,i,q,ans;
    scanf("%lld %lld",&n,&m);
    while(m--)
    {
        scanf("%lld",&q);
        if(q<n+2 || q>3*n)
        ans=0;
        else if(q<=2*n+1)
        ans=q-(n+1);
        else
        ans=(3*n+1)-q;
        printf("%lld\n",ans);
    }
    return 0;
}
