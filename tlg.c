#include<stdio.h>
int main()
{
int t,i,a[10000],c[10000],j,x,b[10000];
scanf("%d",&t);
c[-1]=0;
for(i=0;i<t;i++)
{
scanf("%d %d",&a[i],&b[i]);
c[i]=c[i-1]+a[i]-b[i];
}
for(i=0;i<t;i++)
{
for(j=i;j<t;j++)
{
    if(c[i]>c[j])
    {
        x=c[i];
        c[i]=c[j];
        c[j]=x;
    }
}
}
if(c[0]+c[t-1]>0)
printf("1 %d",c[t-1]);
else
printf("2 %d",-c[0]);
return 0;
}
