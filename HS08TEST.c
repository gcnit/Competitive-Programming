#include<stdio.h>
int main()
{
int x;
double y,z;
scanf("%d",&x);
scanf("%lf",&y);
z=y-x-0.5f;
if(z>=0 && x%5==0)
printf("%.2lf",z);
else
printf("%.2lf",y);
return 0;
}
