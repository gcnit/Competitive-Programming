#include<stdio.h>
int main()
{
    long long int a[110],i;
    a[1]=1;
    for(i=2;i<=100;i++)
    {
        a[i]=a[i-1]+(i*i);
    }
    while(1)
    {
        scanf("%lld",&i);
        if(i)
        printf("%lld\n",a[i]);
        else break;
    }
    return 0;
}
