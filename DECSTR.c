#include<stdio.h>
int main()
{
int t,k,i;
scanf("%d",&t);
while(t--)
{
scanf("%d",&k);
k=k+(k-1)/25;
for(i=k;i>=0;i--)
{
printf("%c",'a'+(i%26));
}
printf("\n");
}
return 0;
}
