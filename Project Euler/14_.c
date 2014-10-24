#include<stdio.h>
int main()
{
long long int i=837799,count=0;
while(i!=1)
{
if(i%2==0)
i=i/2;
else i=(3*i)+1;
count++;
printf("%lld\t%lld\n",count,i);
}
return 0;
}
