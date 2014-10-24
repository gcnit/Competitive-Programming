#include<stdio.h>
int main()
{
int i=1,count=1,j;
while(i<1000000)
{
    j=((i-1)/3);
if((i-1)%3==0 && j%2!=0 && j!=1 && j%3!=0)
i=j;
else
i=2*i;
count++;
printf("%d %d\n",count,i);
}
return 0;
}
