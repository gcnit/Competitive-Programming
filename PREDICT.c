#include<stdio.h>
int main()
{
int T,i;
double P,F;
scanf("%d",&T);
for(i=0;i<T;i++)
{
scanf("%lf",&P);
if(P<0.5)
P=1-P;
F=10000+10000*(1-P)*(2*P-1);
printf("%lf\n",F);
}
return 0;
}
