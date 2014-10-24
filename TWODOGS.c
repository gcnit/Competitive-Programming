#include<stdio.h>
int max(long long int a,long long int b)
{
    if(b>a)
    return b;
    else return a;
}
long long int b[1000001],a[500001];
int main()
{
    long long int n,k,i,x,min;
    scanf("%lld %lld",&n,&k);
    for(i=0;i<=1000000;i++)
    b[i]=10000000;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        if(i<=n-1-i)
        x=i;
        else
        x=n-1-i;
        if(x<b[a[i]])
        b[a[i]]=x;
    }
    min=10000000;
    for(i=0;i<(k+1)/2;i++)
    {
        if(b[i]<10000000 && b[k-i]<10000000)
        if(max(b[i],b[k-i])<min)
        min=max(b[i],b[k-i]);
    }
    if(min==10000000)
    min=-2;
    printf("%lld\n",min+1);
    return 0;
}
