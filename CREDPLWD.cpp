#include<cstdio>
#include<iostream>
#define ll long long int

using namespace std;

int main()
{
    ll m,n,i,j,a[110][110],b[110][110],c[110][110],d[110][110],e[110][110],max=0,k,l,tmp;
    scanf("%lld %lld",&m,&n);
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    {
        scanf("%lld",&a[i][j]);
        b[i][j]=j;
        c[i][j]=j;
        d[i][j]=i;
        e[i][j]=i;
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        if((a[i][j]==a[i][j-1]) && j)
        b[i][j]=b[i][j-1];
        for(j=n-1;j>=0;j--)
        if((a[i][j]==a[i][j+1]) && (j<n-1))
        c[i][j]=c[i][j+1];
    }
    for(j=0;j<n;j++)
    {
        for(i=0;i<m;i++)
        if((a[i][j]==a[i-1][j]) && i)
        d[i][j]=d[i-1][j];
        for(i=m-1;i>=0;i--)
        if((a[i][j]==a[i+1][j]) && (i<m-1))
        e[i][j]=e[i+1][j];
    }

    for(i=0;i<m;i++)
    for(j=n-1;j>=0;j--)
    for(k=b[i][j];k<=j;k++)
    for(l=e[i][k];l>=i;l--)
    if((c[l][k]>=j) && (d[l][j]<=i))
    {
        tmp=(j-k+1)*(l-i+1);
        if(tmp>max)
        max=tmp;
    }
    printf("%lld\n",max);
    return 0;
}
