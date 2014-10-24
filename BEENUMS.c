#include<stdio.h>
int main()
{
    long long int a[50000],i,n,flag;
    a[0]=0;
    a[1]=1;
    for(i=1;i<44721;i++)
    {
        a[i]=a[i-1]+i;
    }
    while(1)
    {
        scanf("%lld",&n);
        flag=0;
        if(n==-1)
        break;
        if((n-1)%6==0)
        {
            n=(n-1)/6;
            for(i=0;a[i]<=n;i++)
            if(n==a[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        printf("N\n");
        else printf("Y\n");
    }
    return 0;
}
