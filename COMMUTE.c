#include<stdio.h>
int main()
{
    int i,n,T,j,time;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d",&n);
        int x[n],t[n],d[n];
        for(j=0;j<n;j++)
        scanf("%d %d %d",&x[j],&t[j],&d[j]);
        time=0;
        for(j=0;j<n;j++)
        {
        if(time<=x[j])
        time=x[j]+t[j];
        else if((time-x[j])%d[j]==0)
        time=x[j]+((time-x[j])/d[j])*d[j]+t[j];
        else if((time-x[j])%d[j]!=0)
        time=x[j]+((time-x[j])/d[j])*d[j]+t[j]+d[j];
        }
        printf("%d\n",time);
    }
    return 0;
}
