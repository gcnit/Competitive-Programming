#include<stdio.h>
int main()
{
long long int i,j,a[10][4],n,p,t;
scanf("%lld",&t);
while(t--)
{
for(i=0;i<=9;i++)
for(j=0;j<4;j++)
{
    if(j==0)
    a[i][j]=i;
    else
    a[i][j]=(a[i][j-1]*i)%10;
}
scanf("%lld %lld",&n,&p);
n%=10;
if(p==0)
printf("1\n");
else if(p%4==0)
printf("%lld\n",a[n][3]);
else
printf("%lld\n",a[n][(p%4)-1]);
}
return 0;
}
