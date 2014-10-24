#include<stdio.h>
int main()
{
    int i,product=1,a[21],k,j;
    for(i=0;i<21;i++)
    {
        a[i]=i;
    }
    for(i=2;i<21;i++)
    {
    product*=a[i];
    k=20/i;
    for(j=2;j<=k;j++)
    a[j*i]/=a[i];
    }
    for(j=0;j<21;j++)
    printf("%d\t%d\n",j,a[j]);
    printf("%d",product);
    return 0;
}
