#include<stdio.h>
int main()
{
    long long int t,a,b;
    scanf("%lld",&t);
    while(t--)
    {
    scanf("%lld",&a);
    if(!(a&(a-1)))
    a=1;
    else if(!(a%2))
    {
        b=a;
        a=0;
        while(b)
        {
            a=(2*a)+(b%2);
            b/=2;
        }
    }
    printf("%lld\n",a);
    }
}
