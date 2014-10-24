#include<stdio.h>
int main()
{
int t,n,pos,neg,x,y;
scanf("%d",&t);
while(t--)
{
pos=0,neg=0;
scanf("%d",&n);
while(n--)
{
scanf("%d %d",&x,&y);
if(pos==0 || neg==0)
{
if(x-y>=0)
pos=1;
else
neg=1;
}
}
if(pos==1 && neg==1)
printf("YES\n");
else
printf("NO\n");
}
return 0;
}
