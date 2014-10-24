#include<stdio.h>
int fact(int );
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
long long int t,k,count[2],sum,n,best;
scanf("%lld",&t);
long long int a[11];
while(t>0)
{
    count[0]=0;
    count[1]=0;
    sum=0;
    for(k=0;k<11;k++)
    scanf("%lld",&a[k]);
    mergesort(a,0,10);
    scanf("%lld",&n);
    for(k=10;k>10-n;k--)
    {
        sum+=a[k];
    }
    for(k=0;k<11;k++)
    {
        if(a[k]==a[11-n])
        {
            if(k<11-n)
            count[1]++;
            count[0]++;
        }
    }
    best=fact(count[0])/(fact(count[1])*fact(count[0]-count[1]));
    printf("%lld\n",best);
    t--;
}
return 0;
}
int fact(int x)
{
    if(x==1 || x==0)
    return 1;
    else
    return x*fact(x-1);
}
