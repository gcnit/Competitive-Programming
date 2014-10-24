#include<stdio.h>
int main()
{
int i,t,l,j,m,k,a[10000],b[10000],n,x,y,c[1000],s,q;
scanf("%d",&t);
for(i=0;i<t;i++)
{
scanf("%d %d",&n,&m);
for(j=0;j<m;j++)
scanf("%d %d",&a[j],&b[j]);
c[0]=m-1;
l=1;
for(j=m-2;j>=0;j--)
{
    q=0;
    for(k=0;k<l;k++)
        if(a[j]==a[c[k]]||a[j]==b[c[k]]||b[j]==a[c[k]]||b[j]==b[c[k]])
        {
            q=-1;
            break;
        }
    if(q==0)
    {
        c[l]=j;
        l++;
    }
}
for(l=l-1;l>=0;l--)
printf("%d ",c[l]);
printf("\n");
}
return 0;
}
