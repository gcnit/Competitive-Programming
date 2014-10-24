#include<stdio.h>
int main()
{
    long long int c,n,m,x,t,q;
    scanf("%lld",&c);
    while(c>0)
    {
       scanf("%lld %lld %lld",&n,&m,&t);
        if(n%m==0)
        x=n/m;
        else
        x=n/m+1;
        q=2*x*t;
        printf("%lld\n",q);
        c--;
    }
    return 0;
}
