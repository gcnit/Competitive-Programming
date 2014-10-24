#include<stdio.h>
int main()
{
    long long int t,x,y;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&x);
        y=x;
        y = y  | ( y >>1 );
        y = y  | ( y >>2 );
        y = y  | ( y >>4 );
        y = y  | ( y >>8 );
        y = y  |  ( y >>16 );
        y =  ( y + 1 ) >> 1;
        printf("%lld\n",y);
    }
    return 0;
}
