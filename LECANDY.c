#include <stdio.h>
int main()
{
int t,i,n,j,c,x,a[100];
scanf("%d",&t);
for(i=0;i<t;i++)
{
x=0;
scanf("%d %d",&n,&c);
for(j=0;j<n;j++)
{
scanf("%d",&a[j]);
x+=a[j];
}
if(x<=c)
printf("Yes\n");
else
printf("No\n");
}
return 0;
}
