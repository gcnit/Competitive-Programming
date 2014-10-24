#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define M 1000000007

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
long long int pw(long long int a, long long int b){
  long long int r;
  if(b==0) return 1;
  r = pw(a,b/2);
  r = (r*r)%M;
  if(b%2) r = (r*a)%M;
  return r;
}
int main()
{
    long long int t,a,x,n,i,y,k;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        char s[n+10],c[n+10];
        long long int b[n+10];
        scanf("%s",s);
        scanf("%lld",&x);
        for(i=0;i<n;i++)
        {
            b[i]=s[i];
        }
        mergesort(b,0,n-1);
        for(i=0;i<n;i++)
        {
            s[i]=b[i];
        }
        a=log2(x)/log2(n);
        a++;
        for(i=1;i<a;i++)
        {
            x-=pw(n,i);
        }
        k=0;
        for(i=a-1;i>=0;i--)
        {
            y=x/pw(n,i);
            x=x%pw(n,i);
            if(i==0)
            c[k]=s[y-1];
            else
            c[k]=s[y];
            k++;
        }
        c[k]='\0';
        printf("%s\n",c);
    }
    return 0;
}
