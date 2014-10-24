#include<math.h>
#include<stdio.h>
int main()
{
long int t,n;
long long int z;
int i,j,k=0;
scanf("%ld",&t);
for(i=0;i<t;i++)
{
scanf("%ld",&n);
k=log2(n);
z=pow(2,k);
printf("%lld\n",z);
k=0;
}
return 0;
}
