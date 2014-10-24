#include<stdio.h>
int main()
{
    long long int t,n,m,i;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        scanf("%lld",&m);
        if(n==m)
        printf("%lld\n",n);
        else
        printf("2\n");
    }
    return 0;
}
