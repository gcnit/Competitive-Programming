#include <stdio.h>
int main()
{
int ax,ay,bx,by,cx,cy,t,count,i;
long int R,d1,d2,d3;
scanf("%d",&t);
for(i=0;i<t;i++)
{
count=0;
scanf("%d",&R);
scanf("%d %d",&ax,&ay);
scanf("%d %d",&bx,&by);
scanf("%d %d",&cx,&cy);
R=R*R;
d1=(ax-bx)*(ax-bx)+(ay-by)*(ay-by);
d2=(ax-cx)*(ax-cx)+(ay-cy)*(ay-cy);
d3=(bx-cx)*(bx-cx)+(by-cy)*(by-cy);
if(d1<=R)
count++;
if(d2<=R)
count++;
if(d3<=R)
count++;
if(count>=2)
printf("yes\n");
else
printf("no\n");
}
return 0;
}
