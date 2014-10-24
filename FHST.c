#include<stdio.h>
int main()
{
    long long int n,i,a[2500],x,y;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    scanf("%lld",&a[i]);
    x=a[1]-a[0];
    y=a[n-1]-a[n-2];
    if(x>y)
    x=y;
    for(i=0;i<n-1;i++)
    {
        if(a[i+1]!=a[i]+x)
        {
            printf("%lld\n",a[i]+x);
            break;
        }
    }
    return 0;
}
