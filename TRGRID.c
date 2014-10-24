#include<stdio.h>
int main()
{
    long long int t,a,b;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&a,&b);
        if(b==1 && a!=1)
        printf("D\n");
        else
        {
            if(a&1)
            printf("R\n");
            else printf("L\n");
        }
    }
    return 0;
}
