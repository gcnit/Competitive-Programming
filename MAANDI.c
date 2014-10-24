#include<stdio.h>
#include<math.h>
int main()
{
int i,j,t,n,q,k;
long long int A,B,C,P[10];
scanf("%d",&t);
P[0]=1;
for(i=1;i<10;i++)
P[i]=10*P[i-1];
for(i=0;i<t;i++)
{
int count=0;
scanf("%lld",&A);
for(j=1;j<=sqrt(A);j++)
{
if(A%j==0)
{
B=A/j,C=j;
n=1,k=1;
while(k!=0)
{
    q=(B%P[n])/P[n-1];
    if(q==4 || q==7)
    {
        count++;
        break;
    }
    k=B/P[n];
    n++;
}

if(B!=C)
{
k=1,n=1;
while(k!=0)
{
    q=(C%P[n])/P[n-1];
    if(q==4 || q==7)
    {
        count++;
        break;
    }
    k=C/P[n];
    n++;
}
}
}
}
printf("%d\n",count);
}
return 0;
}
