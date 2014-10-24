#include<stdio.h>
int main()
{
    long long int i,j=0,z = 2,n=600851475143;
    while (z * z <= n)
    {if (n % z == 0)
    {printf("%lld\n",z);
    n /= z;}
    else
    z++;
    if (n > 1)
    printf("%lld\n",n);}
    return 0;
}
