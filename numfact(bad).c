#include<stdio.h>
int main()
{
int t,i,n,j,k;
scanf("%d",&t);
for(i=0;i<t;i++)
{
scanf("%d",&n);
int A[n],count[n];
for(j=0;j<n;j++)
{
count[j]=0;
scanf("%d",&A[j]);
for(k=1;k<=A[j];k++)
if(A[j]%k==0)
{
count[j]++;
printf("%d\n",count[j]);
}
}
int total=A[0]*A[n-1];
for(j=0;j<n-1;j++)
total+=count[j]*count[j+1];
printf("%d",total);
}
return 0;
}
