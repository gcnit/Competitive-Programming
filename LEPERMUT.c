#include<stdio.h>
int main()
{
int t,i,n,j,inv,linv,A[100],k;
scanf("%d",&t);
for(i=0;i<t;i++)
{
inv=0,linv=0;
scanf("%d",&n);
for(j=0;j<n;j++)
scanf("%d",&A[j]);
for(j=0;j<n-1;j++)
{
for(k=j+1;k<n;k++)
{
    if(A[j]>A[k])
    inv++;
}
}
for(j=0;j<n-1;j++)
{
    if(A[j]>A[j+1])
    linv++;
}
if(inv==linv)
printf("YES\n");
else
printf("NO\n");
}
return 0;
}
