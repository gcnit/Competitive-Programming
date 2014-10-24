#include<bits/stdc++.h>
#define ll long long int
char b[1100][1100];
ll c[1100][1100],d[1100][1100];
int main()
{
    ll t,n,i,j,k,count;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        for(i=0;i<n;i++)
        scanf("%s",&b[i]);
        for(i=0;i<n;i++)
        {
            k=1;
            for(j=n-1;j>=0;j--)
            if(k)
            {
                if(b[i][j]=='.')
                c[i][j]=1;
                else
                {
                    c[i][j]=0;
                    k=0;
                }
            }
            else
            c[i][j]=0;
        }
        for(j=0;j<n;j++)
        {
            k=1;
            for(i=n-1;i>=0;i--)
            if(k)
            {
                if(b[i][j]=='.')
                d[i][j]=1;
                else
                {
                    d[i][j]=0;
                    k=0;
                }
            }
            else
            d[i][j]=0;
        }
        count=0;
        for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            if(c[i][j] && d[i][j])
            count++;
        }
        printf("%lld\n",count);
    }
    return 0;
}
