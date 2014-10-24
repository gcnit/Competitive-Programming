#include<stdio.h>
long long int b[100][100001],a[100000],c[100001];
int main()
{
    long long int i,j,k,count,d[65];
    for(i=2;i<=100000;i++)
    c[i]=1;
    for(i=2;i<=sqrt(100000);i++)
    {
        if(c[i])
        {
            k=2;
            for(j=i*i;j<=100000;j+=i)
            {
                c[j]=0;
            }
        }
    }
    j=0;
    for(i=2;i<=sqrt(100000);i++)
    if(c[i])
    {
        d[j]=i;
        j++;
    }

    return 0;
}

