#include<stdio.h>
#include<math.h>
int main()
{
long long int t,i;
double V,S;
scanf("%lld",&t);
for(i=0;i<t;i++)
{
scanf("%lf",&V);
S=6.5467292*pow(V,(double)(2/3.0));
printf("%.10f\n",S);
}
return 0;
}
