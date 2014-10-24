#include<stdio.h>
int main()
{
    long long int t,i,n,j,x;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        x=0;
        for(j=0;j<=n;j++)
        {
            if((n-j)%7==0 && j%4==0)
            {
                x=1;
                break;
            }
        }
        if(x==1)
        printf("%lld\n",n-j);
        else
        printf("-1\n");
    }
    return 0;
}
