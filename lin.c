#include<stdio.h>
int main()
{
int i,in,n,a[]={2,5,1,0,3,8,3,7},f=0;
scanf("%d",&n);
for(i=0;i<8;i++)
if(a[i]==n)
{
f=1;
in=i;
}
if(f)
printf("%dth\n",in+1);
return 0;
}
