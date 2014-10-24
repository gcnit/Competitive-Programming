#include<stdio.h>
int main()
{
    int ;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d %d",&N,&M);
        for(j=0;j<N;j++)
        for(k=0;k<M;k++)
        scanf("%d",a[j][k])
        for(j=0;j<N;j++)
        for(k=0;k<M;k++)
        if(a[j][k]==1 && (a[j+1][k]==2 && a[j][k+1]==2))
        {
            printf("Case #%d: NO",i+1);
            y=1;
            break;
        }
