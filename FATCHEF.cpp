#include<bits/stdc++.h>
#define ll long long int
#define M 1000000009
using namespace std;
ll a[100010],b[100010],c[100010][2];
int main()
{
    ll t,n,m,i,ans,k;
    char x[2];
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&m);
        memset(b,-1,sizeof(b));
        for(i=0;i<m;i++)
        {
            scanf("%s %lld",x,&a[i]);
            b[a[i]]=x[0]-'A';
        }
        k=0;
        for(i=0;i<100010;i++)
        {
            if(b[i]!=-1)
            {
                c[k][0]=i;
                c[k++][1]=b[i];
            }
        }
        ans=1;
        for(i=1;i<m;i++)
        {
            if(c[i][1]!=c[i-1][1])
            {
                ans=(ans*(c[i][0]-c[i-1][0]))%M;
            }
        }
        printf("%lld\n",ans);
    }
    return 0;
}
