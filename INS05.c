#include<stdio.h>
void merge(int * ,int ,int ,int );
void mergesort(int *a,int lb,int ub)
{
    int mid=(lb+ub)/2;
    if(lb<ub)
    {
        mergesort(a,lb,mid);
        mergesort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}
void merge(int *a,int lb,int mid,int ub)
{
    int c[ub-lb+1];
    int i=0,lp=lb,up=mid+1;
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
    int j;
    for(j=0;j<i;j++)
    a[j+lb]=c[j];
    return;
}
int main()
{
    int t,i,n,j,k,c;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
    scanf("%d",&n);
    int A[n];
    k=(n-2)/3;
    for(j=0;j<n;j++)
    {
        scanf("%d",&A[j]);
    }
    int x[2],y[2];
    x[0]=0,x[1]=0;
    for(j=0;j<n;j++)
    {
        if(A[j]>=x[0]&&A[j]<x[1])
        {
            x[0]=A[j],y[0]=j;
        }
        else if(A[j]>=x[1])
        {
            x[0]=x[1],y[0]=y[1];
            x[1]=A[j],y[1]=j;
        }
    }
    for(j=y[0];j>0;j--)
    {
        A[j]=A[j-1];
    }
    A[0]=x[0];
    for(j=y[1];j<n;j++)
    {
        A[j]=A[j+1];
    }
    A[n-1]=x[1];
    mergesort(A,0,k);
    mergesort(A,n-k-1,n-1);
    int B[k+1],l=k;
    for(j=n-k-1;j<n;j++)
    {
        B[l]=A[j];
        l--;
    }
    for(j=n-k-1;j<n;j++)
    {
        A[j]=B[j-n+k+1];
    }
    for(j=k+1;j<n-k-1;j++)
    A[j]=0;
    for(j=0;j<n;j++)
    printf("%d\t",A[j]);
    }
    return 0;
}
