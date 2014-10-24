#include<stdio.h>
int main()
{
    long long int t,x,n;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&x,&n);

        printf("%lld\n",x&(x-1));
        //Returns number x with the lowest bit set off

        printf("%lld\n",x^(x&(x-1)));
        //Returns the lowest bit of a number x

        printf("%lld\n",x&1<<n);
        //Returns 1<<n if the n-th bit is set in x

        printf("%lld\n",x|1<<n);
        //Returns the number x with the n-th bit set

        printf("%lld\n",x^1<<n);
        //Toggles the state of the n-th bit in the number x

    }
    return 0;
}
