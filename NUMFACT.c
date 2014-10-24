int fac(int ,int );
#include<stdio.h>
#include<math.h>
int main()
{
int t,i,n,j;
scanf("%d",&t);
for(i=0;i<t;i++)
{
int product=1;
scanf("%d",&n);
int A[n];
for(j=0;j<n;j++)
{
scanf("%d",&A[j]);
product=product*A[j];
}
printf("%d\n",fac(product,0));
}
return 0;
}



int fac(int product,int count)
{
if(product==1)
return(2*count+1);
int j;
for(j=sqrt(product);j>1;)
{
if(product/j==0)
return(2*count+1);
if(product%j==0)
{
count=count+fac(j,count);
}
else if(product%j!=0)
j--;
}
}
