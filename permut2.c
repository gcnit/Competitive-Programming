#include<stdio.h>
int main()
{
long long int t,x,i,j,flag;
while(1)
{
scanf("%lld",&t);
if(t==0)
break;
long long int a[t],b[t];
for(i=1;i<=t;i++)
{
    scanf("%lld",&a[i]);
    b[a[i]]=i;
}
flag=0;
for(j=1;j<=t;j++)
if(a[j]!=b[j])
{
    printf("not ambiguous\n");
    flag=1;
    break;
}
if(!flag)
printf("ambiguous\n");
}
return 0;
}
