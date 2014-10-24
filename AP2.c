#include<stdio.h>
int main()
{
    long long int a,b,c,t,n,x,y,i;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        n=(2*c)/(a+b);
        if(n!=5)
        y=(b-a)/(n-5);
        else
        y=0;
        x=a-(2*y);
        printf("%lld\n",n);
        for(i=0;i<n;i++)
        {
            printf("%lld ",x+i*y);
        }
        printf("\n");
    }
    return 0;
}
