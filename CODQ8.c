#include<stdio.h>
int main()
{
    long long int n,x=0,y=0,z=0;
    scanf("%lld",&n);

    while (x<=n/5)
    {
        if(5*x+3*y+2*z==n)
        printf("%lld %lld %lld\n",x,y,z);
        z++;
        if(z>n/2)
        {
            y++;
            z=0;
        }
        if(y>n/3)
        {
            x++;
            y=0;
            z=0;
        }
    }
    return 0;
}
