#include<stdio.h>
#define ll long long int

int main()
{
    ll n,m,i,j,ans=1,count=0,a,b,l=1,x[100],q[100],k;
    scanf("%I64d %I64d",&n,&m);
    for(i=0;i<100;i++)
    {
        q[i]=i;
        x[i]=0;
    }
    for(i=0;i<m;i++)
    {
        scanf("%I64d %I64d",&a,&b);
        if(a<b)
        q[b]=q[a];
        else q[a]=q[b];
    }
    for(i=1;i<=n;i++)
    {
        x[i]=0;
    }
    for(i=1;i<=n;i++)
    {
        x[q[i]]++;
    }
    for(i=1;i<=n;i++)
    if(x[i])
    count++;
    l=n-count;
    for(i=1;i<=l;i++)
    ans=2*ans;
    printf("%I64d",ans);
    return 0;
}
