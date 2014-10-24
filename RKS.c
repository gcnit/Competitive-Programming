#include<stdio.h>
int main()
{
    scanf("%lld %lld",&t,&c);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&a[i]);
        b[i]=a[i];
    }
    mergesort(b,0,n-1);
    j=0;
    c[0][0]=b[0];
    c[0][1]=1;
    for(i=1;i<n;i++)
    {
        if(b[i]!=b[i-1])
        {
            j++;
            c[j][0]=b[i];
        }
        c[j][1]++;
    }
