#include<stdio.h>
#include<math.h>
int main()
{
int n,a[2],b[2],c[2],i,maxi,mini;
scanf("%d",&n);
double area[n],min=1000000000,max=0;
for(i=0;i<n;i++)
{
scanf("%d %d %d %d %d %d",&a[0],&a[1],&b[0],&b[1],&c[0],&c[1]);
area[i]=(a[0]*(b[1]-c[1])+b[0]*(c[1]-a[1])+c[0]*(a[1]-b[1]))/2.0;
if(area[i]<0)
area[i]*=-1;
if(area[i]<=min)
min=area[i],mini=i;
if(area[i]>=max)
max=area[i],maxi=i;
}
printf("%d %d",mini+1,maxi+1);
return 0;
}
