#include<stdio.h>
int main()
{
    long long int i,n;
    scanf("%lld",&n);
    for(i=5;i>0;i--)
    if(i!=4)
    {
        printf("%lld\n",n/i);
        n%=i;
    }
    return 0;
}
