#include<stdio.h>
#define ll long long int

int main()
{
    ll t,n,c,k,i,l,r,a[200],total,y,z,j,max,h,power[200],comb[200][200];
    double avg[200],ans,finalans,x,tmp[200],b[200][200],d[200],count[200][200];
    power[0]=1;
    comb[0][0]=1;
    for(i=1;i<=100;i++)
    {
        comb[i][0]=1;
        for(j=1;j<=i;j++)
        comb[i][j]=(comb[i][j-1]*(i-j+1))/j;
        power[i]=power[i-1]*2;
    }
    scanf("%lld",&t);

    while(t--)
    {
        scanf("%lld %lld %lld",&n,&c,&k);
        for(i=0;i<=n;i++)
        a[i]=0;
        for(i=0;i<k;i++)
        {
            scanf("%lld %lld",&l,&r);
            for(j=l;j<=r;j++)
            a[j]++;
        }
        for(i=0;i<c;i++)
        {
            for(j=0;j<c;j++)
            {
                b[i][j]=0;
            }
        }
        for(i=0;i<c;i++)
        {
            for(j=0;j<c;j++)
            {
                b[(i*j)%c][j]+=1.0/c;
            }
        }
        for(i=0;i<=k;i++)
        {
            for(j=0;j<c;j++)
            count[i][j]=0.0;
        }
        count[0][1]=1.0;
        for(i=0;i<k;i++)
        {
            for(j=0;j<c;j++)
            {
                x=count[i][j];
                for(l=0;l<c;l++)
                {
                    count[i+1][l]+=x*(b[l][j]);
                }
            }
        }
        for(i=0;i<=k;i++)
        {
            avg[i]=0;
            for(j=0;j<c;j++)
            {
                avg[i]+=j*(count[i][j]);
            }
        }
        ans=0;
        for(i=1;i<=n;i++)
        {
            for(j=0;j<=a[i];j++)
            {
                z=comb[a[i]][j];
                ans+=(avg[j]*z*1.0)/power[a[i]];
            }
        }
        printf("%.8lf\n",ans);
    }
    return 0;
}
