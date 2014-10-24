#include<stdio.h>
int main()
{
int i,t,n;
float s,j;
scanf("%d",&t);
for(i=0;i<t;i++)
{
s=0;
scanf("%d",&n);
for(j=1;j<=n;j++)
s+=1/j;
s=n*s;
printf("%.2f\n",s);
}
return 0;
}
