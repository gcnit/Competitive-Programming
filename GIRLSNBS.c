#include<stdio.h>
int main()
{
    long long int a,b;
    while(1)
    {
        scanf("%lld %lld",&a,&b);
        if(a==-1 && b==-1)
        break;
        if(!a)
        printf("%lld\n",b);
        else if(!b)
        printf("%lld\n",a);
        else if(a>=b)
        {
        if(a%(b+1))
        printf("%lld\n",(a/(b+1))+1);
        else
        printf("%lld\n",(a/(b+1)));
        }
        else if(a<b)
        {
        if(b%(a+1))
        printf("%lld\n",(b/(a+1))+1);
        else
        printf("%lld\n",(b/(a+1)));
        }
    }
    return 0;
}
