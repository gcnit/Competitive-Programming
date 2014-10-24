#include<stdio.h>
int main()
{
    long long int n,i,zero=0,sum,min=1000000000;
    scanf("%lld",&n);
    long long int t[n],pos[n],neg[n];
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            pos[i]=0;
            neg[i]=0;
        }
        else
        {
            pos[i]=pos[i-1];
            neg[i]=neg[i-1];
        }
        scanf("%lld",&t[i]);
        if(t[i]>0)
        {
        pos[i]++;
        }
        else if(t[i]<0)
        {
        neg[i]++;
        }
        else zero++;
    }
    for(i=0;i<n;i++)
    {
        if(i==0)
        sum=pos[i]+neg[n-1]-neg[i]+zero;
        else if(i>0 && i<n-1)
        sum=pos[i-1]+neg[n-1]-neg[i]+zero;
        else sum=pos[i-1]+neg[n-1]-neg[i-1]+zero;
        if(sum<=min)
        min=sum;
    }
    printf("%lld",min);
    return 0;
}
