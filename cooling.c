#include<stdio.h>
int main()
{
int n,t,a[30],c,i,j,k,b[30],count;
scanf("%d",&t);
for(k=0;k<t;k++)
{
count=0;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
scanf("%d",&b[i]);
for(i=0;i<n;i++)
{
for(j=i;j<n;j++)
{
    if(a[i]>a[j])
    {
        c=a[i];
        a[i]=a[j];
        a[j]=c;
    }
}
}
for(i=0;i<n;i++)
{
for(j=i;j<n;j++)
{
    if(b[i]>b[j])
    {
        c=b[i];
        b[i]=b[j];
        b[j]=c;
    }
}
}
j=0;
for(i=0;i<n;i++)
{
    for(j=j;j<n;j++)
    {
        if(a[i]<=b[j])
        {
            count++;
            j++;
            break;
        }
    }
}
printf("%d\n",count);
}
return 0;
}
