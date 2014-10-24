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
int t,mul;
long long int k,n,sum;
scanf("%d",&t);
while(t--)
{
sum=0;
scanf("%lld",&n);
long long int a[n];
for(k=0;k<n;k++)
scanf("%lld",&a[k]);
mergesort(a,0,n-1);
for(k=0;k<n;k++)
{
if(a[k]-a[(n-1)/2]>0)
mul=1;
else mul=-1;
sum+=(a[k]-a[(n-1)/2])*mul;
}
printf("%lld\n",sum);
}
return 0;
}
