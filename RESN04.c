#include<stdio.h>
int main()
{
int i,t,count,j,a[100],n;
scanf("%d",&t);
for(i=0;i<t;i++)
{
scanf("%d",&n);
for(j=1;j<=n;j++)
scanf("%d",&a[j]);
count=0;
for(j=1;j<=n;)
{
    if(a[j]>=j)
    {
        count++;
        a[j]=a[j]-j;
    }
    else
        j++;
}
if(count%2==1)
printf("ALICE\n");
else
printf("BOB\n");
}
return 0;
}
