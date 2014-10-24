#include<stdio.h>
int main()
{
    long long int t,k,i,j,n,l,sum,sum1,flag,c[1000],d[1000];
    char a[1000][100],b[1000][100];
    scanf("%lld",&t);
    for(k=1;k<=t;k++)
    {
        scanf("%lld %lld",&n,&l);
        for(i=0;i<n;i++)
        scanf("%s",a[i]);
        for(i=0;i<n;i++)
        scanf("%s",b[i]);
        for(j=0;j<l;j++)
        {
            c[j]=0;
            d[j]=0;
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<l;j++)
            {
                if(a[i][j]-'0'==1)
                c[j]++;
                if(b[i][j]-'0'==1)
                d[j]++;
            }
        }
        printf("Case #%lld: ",k);
        sum1=0;
        flag=1;
        for(i=0;i<l;i++)
        {
            if(!(c[i]==d[i] || c[i]+d[j]==l))
            {
                flag=0;
                printf("NOT POSSIBLE\n");
                break;
            }
            else if(c[i]+d[i]==n)
            {
                sum=c[i]-d[i];
                if(c[i]<d[i])
                sum*=-1;
            }
            sum1+=sum;
        }
        if(flag==1)
        printf("%lld\n",sum1);
    }
    return 0;
}
