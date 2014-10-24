#include<stdio.h>
int main()
{
long int t,c,i,j,swapped;
scanf("%ld",&t);
long long int a[t];
for(i=0;i<t;i++)
scanf("%lld",&a[i]);
for(i=1;i<t;i++)
{
for(c=a[i],j=i-1;j>=0&&a[j]>c;j--)
{
a[j+1] = a[j];
}
a[j+1] = c;
}
for(i=0;i<t;i++)
printf("%ld\n",a[i]);
return 0;
}
