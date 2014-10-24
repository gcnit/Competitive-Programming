#include<stdio.h>
int main()
{
    long long int n,count=0,i,j;
    scanf("%lld",&n);
    long long int a[n],b[n];
    for(i=0;i<n;i++)
    scanf("%lld %lld",&a[i],&b[i]);
    for(i=0;i<n;i++)
    for(j=i+1;j<n;j++)
    {
        if((a[i]>a[j] && b[i]<b[j]) || (a[i]<a[j] && b[i]>b[j]))
        count++;
    }
    printf("%lld\n",count);
    return 0;
}
