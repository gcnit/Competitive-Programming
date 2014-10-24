#include<stdio.h>
int main()
{
int i,t,count,j,k,n,min;
scanf("%d",&t);
for(i=0;i<t;i++)
{
scanf("%d",&n);
int a[n];
for(j=0;j<n;j++)
scanf("%d",&a[j]);
min=1001;
for(j=0;j<n;j++)
if(a[j]<=min)
min=a[j];
for(k=min;k>0;k--)
{
for(j=0;j<n;j++)
{
    if(a[j]%k!=0)
    break;
    if(j==n-1)
    {
        printf("%d",a[0]/k);
        for(j=1;j<n;j++)
        printf(" %d",a[j]/k);
        printf("\n");
        k=-1;
        break;
    }
}
}
}
return 0;
}
