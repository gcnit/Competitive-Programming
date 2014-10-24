#include<stdio.h>
int main()
{
    long long int n,t,i;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&i);
        for(n=1;n<i;n++)
        {
        if(n%3==0)
        printf("Fizz");
        if(n%5==0)
        printf("Buzz");
        if(n%3 && n%5) printf("%lld",n);
        printf("\n");
        }
    }
    return 0;
}
