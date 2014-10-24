#include<stdio.h>
#include<math.h>
long long int A[1000000];
int main()
{
long long int t,n,i,j,S,flag,a,b;
scanf("%lld",&t);
for(i=0;A[i]<=1000000;i++)
{
    for(a=1;a<=1000;a+=2)
    for(b=2;b<=1000;b+=2)
    if((a*a)+(b*b)<=1000000)
    A[i]=(a*a)+(b*b);
}
while(t--)
{
flag=0;
scanf("%lld",&S);
for(j=0;j<i;j++)
if(S%A[i]==0)
{
    printf("PERFECT\n");
    flag=1;
    break;
}
if(flag==0)
printf("IMPERFECT\n");
}
return 0;
}
