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
long long int t,k;
scanf("%lld",&t);
long long int a[t];
for(k=0;k<t;k++)
scanf("%lld",&a[k]);
mergesort(a,0,t-1);
for(k=0;k<t;k++)
printf("%lld\n",a[k]);
return 0;
}
