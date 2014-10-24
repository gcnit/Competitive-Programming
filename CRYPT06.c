#include<stdio.h>
int fn(int*,int ,int ,int);
int main()
{
int n,i;
scanf("%d",&n);
while(n!=0)
{
int S[n];
for(i=0;i<n;i++)
scanf("%d",S[i]);
for(i=0;i<=(n-6);i++)
{
fn(S,i,i,n-6);
}
scanf("%d",&n);
}
return 0;
}
int fn(int* S,int i,int x,int n)
{
int j;
printf("%d",S[i]);
if(i==x+6)
return 0;
for(j=i+1;j<=n-1;j++)
{
fn(S,j,x,n-1);
}
}
