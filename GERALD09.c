#include<stdio.h>
int main()
{
    long long int t,n,m,k,s,a,i,j;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld %lld",&n,&m,&k);
        a=n*m;
        s=(k-1)/a;
        for(i=1;i<=a;i++)
        {
            if(i<=s)
            {
                if(i<=a/2)
                printf("G");
                else if(i<=(3*a)/4)
                printf("C");
                else if(i<=(7*a)/8)
                printf("A");
                else if(i<=(15*a)/16)
                printf("T");
                else if(i<= (31*a)/32)
                printf("G");
                else if(i<=(63*a)/64)
                printf("C");
                else if(i<=(127*a)/128)
                printf("A");
                else
                printf("T");

            }
            else printf("T");
            if(i%m==0)
            printf("\n");
        }
    }
    return 0;
}
