#include<stdio.h>
#define gc getchar
inline long long int scan() {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  long long int ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}
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
    long long int t,n,m,i,j;
    t=scan();
    while(t--)
    {
        n=scan();
        m=scan();
        long long int a[m],b[m],C[n],sum=0;
        for(i=0;i<m;i++)
        b[i]=0;
        for(i=0;i<m;i++)
        {
            a[i]=scan();
            b[a[i]]++;
        }

        for(i=0;i<n;i++)
        {
            C[i]=scan();
            long long int P[C[i]];
            for(j=0;j<C[i];j++)
            {
               P[j]=scan();
            }
            mergesort(P,0,C[i]-1);

            for(j=C[i]-1;j>C[i]-1-b[i] && j>=0;j--)
            {
                sum+=P[j];
            }
        }
        printf("%lld\n",sum);
        }
    return 0;
}
