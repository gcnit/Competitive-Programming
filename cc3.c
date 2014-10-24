#include<stdio.h>
int main()
{
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&k);
        if(k>=n)
        {
            ans=pw(2,n-1);
        }
        else if(k==n-1)
        {
            ans=1;
        }
        else if(k==2)
        {
            ans=n-1;
        }
        else
        {

        }
        printf("")
    return 0;
}
