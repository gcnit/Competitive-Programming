#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,m,j,i,tmp;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&m);
        long long int len[m],d[m];
        j=0;
        for(i=0;i<m;i++)
        {
            scanf("%lld %lld",len[i],d[i]);
            tmp=len[i]+j;
            for(j=j;j<tmp;j++)
            a[j]=d[i];
        }
        for(i=j-1;i>=0;i--)
            printf("%lld",a[i]);
    }
    return 0;
}

