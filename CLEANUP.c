#include<stdio.h>
int main()
{
int i,t,count,j,a[1000],b[1000],k,l,m,n;
scanf("%d",&t);
for(i=0;i<t;i++)
{
    l=0;
    scanf("%d %d",&n,&m);
    for(j=0;j<m;j++)
    scanf("%d",&a[j]);
    for(k=1;k<=n;k++)
    {
        count=0;
        for(j=0;j<m;j++)
        {
            if(a[j]!=k)
            count++;
        }
        if(count==m)
        {
            b[l]=k;
            l++;
        }
    }
    for(l=0;l<n-m;l+=2)
    printf("%d ",b[l]);
    printf("\n");
    for(l=1;l<n-m;l+=2)
    printf("%d ",b[l]);
    printf("\n");
    if(n-m==0)
    printf("\n");
}
return 0;
}
