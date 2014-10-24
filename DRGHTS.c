#include<stdio.h>
int min(long long int a,long long int b)
{
    if(a<b)
    return a;
    else return b;
}
long long int a[50005],b[50005][2],c[50005],count[50005],counter[50005];
int main()
{
    long long int n,m,i,furik,rubik;
    scanf("%lld %lld",&n,&m);

    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        counter[i]=a[i]-1;
        c[i]=-1;
    }

    for(i=0;i<m;i++)
    {
        scanf("%lld %lld",&b[i][0],&b[i][1]);
        counter[b[i][0]-1]+=a[b[i][1]-1];
        counter[b[i][1]-1]+=a[b[i][0]-1];
    }

    for(i=0;i<m;i++)
    {
        if(a[b[i][0]-1]==0 && counter[b[i][0]-1]>=1 && a[b[i][1]-1]==1 && counter[b[i][1]-1]==0)
        {
            counter[b[i][1]-1]++;
        }
        else
        if(a[b[i][1]-1]==0 && counter[b[i][1]-1]>=1 && a[b[i][0]-1]==1 && counter[b[i][0]-1]==0)
        {
            counter[b[i][0]-1]++;
        }
    }

    for(i=0;i<m;i++)
    {
        if(c[b[i][0]-1]==-1 && c[b[i][1]-1]==-1)
        {
            c[b[i][0]-1]=min(b[i][0]-1,b[i][1]-1);
            c[b[i][1]-1]=c[b[i][0]-1];
        }
        else if(c[b[i][1]-1]==-1)
        c[b[i][1]-1]=c[b[i][0]-1];
        else if(c[b[i][0]-1]==-1)
        c[b[i][0]-1]=c[b[i][1]-1];
        else
        {
            c[b[i][0]-1]=min(c[b[i][0]-1],c[b[i][1]-1]);
            c[b[i][1]-1]=c[b[i][0]-1];
        }
    }


    for(i=0;i<n;i++)
    {
        if(c[i]>=0)
        c[i]=c[c[i]];
        count[i]=0;
        rubik=0;
        furik=0;
    }

    for(i=0;i<n;i++)
    {
    if(a[i]==0)
    c[i]=-1;
    if(c[i]>=0)
    count[c[i]]++;
    }
    for(i=0;i<n;i++)
    {
        if(count[i]==1)
        count[i]=0;
        if(counter[i]>0)
        rubik++;
        furik+=(count[i]*(count[i]-1))/2;
    }

    printf("%lld %lld\n",furik,rubik);
    return 0;
}
