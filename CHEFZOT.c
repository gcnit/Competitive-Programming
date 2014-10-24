#include<stdio.h>
long long int a[100010];
int main()
{
    long long int n,max,i,j;
    scanf("%lld",&n);
    max=-1;
    j=-1;
    for(i=0;i<=n;i++)
    {
        if(i<n)
        scanf("%lld",&a[i]);
        else a[i]=0;
        if(a[i]==0)
        {
                if(max<i-j-1)
                max=i-j-1;
                j=i;
        }
    }
    printf("%lld\n",max);
    return 0;
}
