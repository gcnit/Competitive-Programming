#include<stdio.h>
int fact(int );
int main()
{
int x,n,j,i,z[9],product=1;
char a[60];
scanf("%d %d",&x,&n);
for(i=0;i<n;i++)
{
scanf("%s",a);
for(j=0;j<54;j++)
{
if(a[j]=='0')
{
if(j<36)
z[j/4]++;
else
z[(53-j)/2]++;
}
}
for(j=0;j<9;j++)
if(z[j]>=x)
product*=fact(z[j])/(fact(x)*fact(z[j]-x));
}
printf("%d",product);
return 0;
}
int fact(int x)
{
    if(x==1 || x==0)
    return 1;
    else
    return x*fact(x-1);
}
