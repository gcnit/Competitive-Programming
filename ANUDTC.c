#include<stdio.h>
int main()
{
    long long int t,n;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        if(360%n==0)
        printf("y ");
        else
        printf("n ");
        if(n<=360)
        printf("y ");
        else
        printf("n ");
        if(n<=26)
        printf("y\n");
        else
        printf("n\n");
    }
    return 0;
}
