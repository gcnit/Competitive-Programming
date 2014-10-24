#include <stdio.h>
int main()
{
int t,i;
long int n;
scanf("%d",&t);
for(i=0;i<t;i++)
{
scanf("%ld",&n);
if(n%4==1)
printf("ALICE\n");
else
printf("BOB\n");
}
return 0;
}
