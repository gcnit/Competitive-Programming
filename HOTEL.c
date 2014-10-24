#include<stdio.h>
int main()
{
int i,t,n,j,k,count,max,max2;
scanf("%d",&t);
for(i=0;i<t;i++)
    {
    scanf("%d",&n);
    int a[n],b[n],max=0;
    for(j=0;j<n;j++)
    {
    scanf("%d",&a[j]);
    if(a[j]>=max)
    max=a[j];
    }
    for(j=0;j<n;j++)
    {
    scanf("%d",&b[j]);
    if(b[j]>=max)
    max=b[j];
    }
    max2=0;
    for(j=0;j<=max;j++)
    {
        count=0;
        for(k=0;k<n;k++)
        if(j>=a[k] && j<b[k])
        count++;
        if(count>=max2)
        max2=count;
    }
    printf("%d\n",max2);
    }
return 0;
}
