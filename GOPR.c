#include<stdio.h>
int main()
{
int t,t1,t2,d,st1,st2,mt1,mt2,ht1,ht2;
scanf("%d",&t);
while(t--)
{
scanf("%d %d %d",&ht1,&mt1,&st1);
t1=st1+(mt1*60)+(ht1*3600);
scanf("%d %d %d",&ht2,&mt2,&st2);
t2=st2+(mt2*60)+(ht2*3600);
d=(t2-t1)%400;
if((d>=0 && d<=99) || (d>=200 && d<=299))
printf("S\n");
else
printf("C\n");
}
return 0;
}
