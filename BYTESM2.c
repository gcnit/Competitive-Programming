#include<stdio.h>
int max(int a,int b);
int main()
{
    int a[110][110],n,t,i,j,k;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf("%d %d",&n &m);
        for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        scanf("%d",&a[i][j]);
        for(k=0;k<m;k++)
        {
            for(i=n-2;i>=0;i--)
            for(j=0;j<m;j++)
            if(j==0)
            a[i][j]+=max(a[i+1][j],a[i+1][j+1]);
            else if(j==m-1)
            a[i][j]+=max(a[i+1][j],a[i+1][j-1]);
            else
            a[i][j]+=max(a[i+1][j],a[i+1][j-1],a[i+1][j+1]);

        }
    }
    return 0;
}
int max(int a, int b)
{
    if(a>b)
        return a;
    else
        return b;
}
