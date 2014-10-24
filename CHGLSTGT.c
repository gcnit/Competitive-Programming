#include<stdio.h>
int main()
{
int t,n,rear,front,count,i;
scanf("%d",&t);
while(t>0)
{
scanf("%d",&n);
char S[n+10];
scanf("%s",S);
count=0;
for(front=0;front<n;)
{
rear=n-1;
for(i=front;i<=(rear+front)/2;)
{
if(S[i]!=S[rear+front-i])
{
i=front;
rear--;
}
else if(i==(rear+front)/2)
{
count++;
front=rear+1;
i++;
}
else i++;
}
}
printf("%d\n",count);
t--;
}
return 0;
}
