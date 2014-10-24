#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    if(n%10)
    printf("1\n%lld",n%10);
    else
    printf("2");
    return 0;
}
