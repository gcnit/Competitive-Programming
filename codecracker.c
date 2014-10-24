#include<stdio.h>
void quick(long int *a,long int lb,long int ub)
{
if(lb>=ub)
return;
long int d=a[lb],i=lb,j,c;
for(j=lb+1;j<=ub;j++)
{
    if(a[j]<d)
    {
        i++;
        c=a[i];
        a[i]=a[j];
        a[j]=c;
    }
}
c=a[i];
a[i]=a[lb];
a[lb]=c;
quick(a,lb,i-1);
quick(a,i+1,ub);
}

int main()
{
long int n,N,K,i,j,p,sum,max;
scanf("%ld",&n);
for(i=0;i<n;i++)
{
scanf("%ld %ld",&N,&K);
long int t[N],a[K];
for(j=0;j<N;j++)
scanf("%ld",&t[j]);
for(p=0;p<=N-3;p++)
{
    a[p]=t[p]+t[p+1]+t[p+2];
}
quick(a,0,N-3);
sum=0;
max=a[N-3];
for(p=N-3;p>=0;p--)
{
    if(a[p]==max)
    sum+=a[p];
    else
    break;
}
printf("%ld\n",sum);
}
return 0;
}
