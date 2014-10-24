#include <stdio.h>
#include<math.h>
int main()
{
int t,i,P,S;
double V,C;
scanf("%d",&t);
for(i=0;i<t;i++)
{
scanf("%d %d",&P,&S);
C=(double)(P-sqrt(P*P-24*S))/12;
V=C*C*((double)(P/4)-2*C);
printf("%.2lf\n",V);
}
return 0;
}
