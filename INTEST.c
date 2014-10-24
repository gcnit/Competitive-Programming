#include<stdio.h>
int main()
{
long int n,k,t,a=0;
int i;
scanf("%ld",&n);
scanf("%ld",&k);
for(i=0;i<n;i++)
{
scanf("%ld",&t);
if(t%k==0)
a++;
}
printf("%ld",a);
return 0;
}
