#include<stdio.h>
int main()
{
int t,n,i,j,k;
scanf("%d",&t);
for(i=0;i<t;i++)
{
scanf("%d",&n);
j=n/5;
k=j;
while(1)
{
if(j==0) break;
else k=k+(j=(j/5));
}
printf("%d\n",k);
}
return 0;
}
