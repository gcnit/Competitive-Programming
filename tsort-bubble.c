#include<stdio.h>
int main()
{
long int t,c,i,j,swapped;
scanf("%ld",&t);
long long int a[t];
for(i=0;i<t;i++)
scanf("%lld",&a[i]);
do
{
swapped = 0;
for(i=1; i<t; i++)
{
    if(a[i-1]>a[i])
    {
    c=a[i-1];
    a[i-1] = a[i];
    a[i] = c;
    swapped = 1;
    }
}

}
while(swapped);
for(j=0;j<t;j++)
printf("%ld\n",a[j]);
return 0;
}
