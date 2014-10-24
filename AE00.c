#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,i,j,count=0;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    for(j=1;j<=sqrt(i);j++)
    if(i%j==0)count++;
    printf("%lld\n",count);
    return 0;
}
