#include<stdio.h>
long long int gcd(long long int *a,long long int i,long long int n)
{
    long long int c;
    if (i==n-1)
    return a[i];
    if(a[i+1]>a[i])
    {
        a[i+1]=a[i+1]%a[i];
    }
    else
    {
        a[i]=a[i]%a[i+1];
        c=a[i+1];
        a[i+1]=a[i];
        a[i]=c;
    }
    if(a[i+1]==0)
    {
        a[i+1]=a[i];
        return gcd(a,i+1,n);
    }
    return gcd(a,i,n);
}
int main()
{
long long int t,i,n,k,j;
scanf("%lld",&t);
for(i=0;i<t;i++)
{
    scanf("%lld",&n);
    long long int a[n];
    for(j=0;j<n;j++)
    {
        scanf("%lld",&a[j]);
    }
    printf("%lld\n",gcd(a,0,n));
}
return 0;
}
