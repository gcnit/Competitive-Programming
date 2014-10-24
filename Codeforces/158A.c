#include<stdio.h>
void merge(long long int * ,long long int ,long long int ,long long int );
void mergesort(long long int *a,long long int lb,long long int ub)
{
    long long int mid=(lb+ub)/2;
    if(lb<ub)
    {
        mergesort(a,lb,mid);
        mergesort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}
void merge(long long int *a,long long int lb,long long int mid,long long int ub)
{
    long long int c[ub-lb+1];
    long long int i=0,lp=lb,up=mid+1;
    while(lp<=mid&&up<=ub)
    {
        if(a[lp]<a[up])
        {
            c[i++]=a[lp++];
        }
        else
        {
            c[i++]=a[up++];
        }
    }
    while(lp<=mid)
    c[i++]=a[lp++];
    while(up<=ub)
    c[i++]=a[up++];
    long long int j;
    for(j=0;j<i;j++)
    a[j+lb]=c[j];
    return;
}
int main()
{
long long int i,k,n,count=0;
scanf("%I64d %I64d",&n,&k);
long long int a[n];
for(i=0;i<n;i++)
scanf("%I64d",&a[i]);
mergesort(a,0,n-1);
for(i=n-1;i>=n-k;i--)
{
    if(a[i]==0)
    break;
    count++;
}
for(i=n-k-1;i>=0;i--)
{
    if(a[i]==0)
    break;
    if(a[i]==a[n-k])
    count++;
    else break;
}
printf("%I64d",count);
return 0;
}
