#include<stdio.h>
int main()
{
long long int n,x,i,j,fact[160],carry,flag,t;
char c[160];
scanf("%lld",&t);
while(t>0)
{
scanf("%lld",&n);
for(i=0;i<160;i++)
fact[i]=0;
fact[158]=1;
for(i=1;i<=n;i++)
{
carry=0;
for(j=158;j>=0;j--)
{
x=((fact[j]*i)+carry)/10;
fact[j]=((fact[j]*i)+carry)%10;
carry=x;
}
}
flag=0;
for(i=0;i<159;i++)
{
    if(fact[i]>0)
    flag=1;
    if(flag==1)
    printf("%lld",fact[i]);
}
printf("\n");
t--;
}
return 0;
}
