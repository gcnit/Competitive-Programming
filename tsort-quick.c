#include<stdio.h>
void quick(long long int *a,long long int lb,long long int ub)
{
if(lb>=ub)
return;
long long int d=a[lb],i=lb,j,c;
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
long long int t,k;
scanf("%lld",&t);
long long int a[t];
for(k=0;k<t;k++)
scanf("%lld",&a[k]);
quick(a,0,t-1);
for(k=0;k<t;k++)
printf("%lld\n",a[k]);
return 0;
}
