#include<stdio.h>
#include<math.h>
int main()
{
int x,z,t;
double y;
scanf("%d",&t);
while(t--)
{
scanf("%d",&x);
y=log2(x);
z=y;
if(x<1)
y=1;
printf("%d %lf %d\n",x,y,z);
printf("%d\n",1-ceil(y-z));
}
return 0;
}
