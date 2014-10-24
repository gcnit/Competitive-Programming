#include<stdio.h>
int main()
{
    long long int n,m,i,q[60],a[1500],b[1500],j,c[60],s,ans,p;
    scanf("%I64d %I64d",&n,&m);
    for(i=1;i<=n;i++)
    q[i]=i;
    for(i=0;i<m;i++)
    {
        scanf("%I64d %I64d",&a[i],&b[i]);
    }
    for(j=0;j<=n;j++)
    for(i=0;i<m;i++)
    {
        if(q[a[i]]>q[b[i]])
        q[a[i]]=q[b[i]];
        else
        q[b[i]]=q[a[i]];
    }
    for(i=1;i<=n;i++)
    c[i]=0;
    for(i=1;i<=n;i++)
    c[q[i]]=1;
    s=0;
    for(i=1;i<=n;i++)
    {
        if(c[i]==1)
        s++;
    }
    p=n-s;
    ans=1;
    for(i=1;i<=p;i++)
    ans=2*ans;
    printf("%I64d",ans);
    return 0;
}
