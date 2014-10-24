#include<stdio.h>
long long int b[3000][3000];
char a[3000][3000];
int main()
{
    long long int n,i,j,count[3000],finalans,ans;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        count[i]=0;
        b[i]=0;
        scanf("%s",a[i]);
        for(j=0;j<n;j++)
        if(a[i][j]=='1')count[i]++;
    }
    for(i=0;i<n;i++)
    {
        if(b[i])
        continue;
        getans(a[i],b,index);
    }
    return 0;
}
