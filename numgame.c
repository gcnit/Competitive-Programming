#include<stdio.h>
int main()
{
int t,i;
long long int n;
scanf("%d",&t);
for(i=0;i<t;i++)
{
scanf("%lld",&n);
if(n%2==1)
printf("BOB\n");
else
printf("ALICE\n");
}
return 0;
}
