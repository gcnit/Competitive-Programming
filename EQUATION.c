#include<stdio.h>
int main()
{
int t,N,i,j,k,count,A,B,C;
scanf("%d",&t);
while(t--)
{
count=0;
scanf("%d %d %d %d",&N,&A,&B,&C);
for(i=0;i<=A;i++)
for(j=0;j<=B;j++)
for(k=0;k<=C;k++)
if(i+j+k<=N)
count++;
printf("%d\n",count);
}
return 0;
}
