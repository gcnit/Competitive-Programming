#include<stdio.h>
long long int fac(long long int);
int main()
{
long long int i,t,n,j=0;
scanf("%d",&t);
while(j<t)
{
scanf("%d",&n);
for(i=3;i<2*n;i+=2)
{
if(i==2*n-1)
{
printf("%d",2*n);
break;
}
if((fac(2*n-1)/fac(2*n-i))%fac(i)!=0)
{
printf("%d\n",2*n/i);
break;
}
}
j++;
}
return 0;
}
long long int fac(long long int i)
{
    if(i==1)
    {
        return 1;
    }
    return i*fac(i-1);
}
