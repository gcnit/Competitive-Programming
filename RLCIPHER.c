#include<stdio.h>
int main()
{
    long long int t,n,a;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        while(n--)
        {
            scanf("%lld",&a);
            if(a<0);
            else if (a==1 || a==2 || a==5)
            a=(a%4)-4;
            else a=-4;
            printf("%lld ",a);
        }
        printf("\n");
    }
    return 0;
}
