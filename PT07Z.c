#include<stdio.h>
#define ll long long int
ll max(ll a,ll b)
{
    if(a>=b)
    return a;
    else
    return b;
}
int main()
{
    ll n,i,a[10100][2],b[10100],c[10100],d[10100],root,ans;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld %lld",&a[i],&b[i]);
        if(!c[a[i][0]])
        c[a[i]][0]=b[i];
        else
        c[a[i]][1]=b[i];
        d[b[i]]=a[i];
    }
    for(i=1;i<=n;i++)
    if(d[i]==0)
    root=i;
    l[root]=0;
    printf("%lld\n",ans);
    return 0;
}
