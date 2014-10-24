#include<stdio.h>
int main()
{
    long long int m,n,a,i,j,count;
    scanf("%lld %lld",&m,&n);
    count=0;
    long long int b[m*n],c[m*n];
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    {
    scanf("%lld",&a);
    if(a)
    {
    b[count]=i+1;
    c[count]=j+1;
    count++;
    }
    }
    printf("%lld\n",count);
    for(i=0;i<count;i++)
    printf("%lld %lld %lld %lld\n",b[i],c[i],b[i],c[i]);
    return 0;

}
