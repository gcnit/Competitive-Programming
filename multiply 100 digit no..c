#include<stdio.h>
int main()
{
char x[101];
int a,a1,a2,a3,a4,a5,y[101],b[106],c[106],d[106],e[106],f[106],g[106],i,l=0,k=0,carry=0;
scanf("%s",x);
scanf("%d",&a);
a5=a%10;
a4=(a%100)/10;
a3=(a%1000)/100;
a2=(a%10000)/1000;
a1=a/10000;
for(i=0;i<101&&x[i]!='\0';i++)
{
    l++;
}
for(i=0;i<l;i++)
{
    y[i]=x[i]-'0';
}
for(i=l-1;i>=0;i--)
{
    b[i+5]=(y[i]*a5)+carry;
    carry=b[i+5]/10;
    b[i+5]=b[i+5]%10;
}
for(i=4;i>=0;i--)
{
    b[i]=carry;
    carry=b[i]/10;
}
for(i=l-1;i>=0;i--)
{
    c[i+4]=(y[i]*a4)+carry;
    carry=c[i+4]/10;
    c[i+4]=c[i+4]%10;
}
for(i=3;i>=0;i--)
{
    c[i]=carry;
    carry=c[i]/10;
}
c[l+4]=0;
for(i=l-1;i>=0;i--)
{
    d[i+3]=(y[i]*a3)+carry;
    carry=d[i+3]/10;
    d[i+3]=d[i+3]%10;
}
for(i=2;i>=0;i--)
{
    d[i]=carry;
    carry=d[i]/10;
}
for(i=l+4;i>=l+3;i--)
d[i]=0;
for(i=l-1;i>=0;i--)
{
    e[i+2]=(y[i]*a2)+carry;
    carry=e[i+2]/10;
    e[i+2]=e[i+2]%10;
}
for(i=1;i>=0;i--)
{
    e[i]=carry;
    carry=e[i]/10;
}
for(i=l+4;i>=l+2;i--)
e[i]=0;
for(i=l-1;i>=0;i--)
{
    f[i+1]=(y[i]*a1)+carry;
    carry=f[i+1]/10;
    f[i+1]=f[i+1]%10;
}
f[0]=carry;
for(i=l+4;i>=l+1;i--)
f[i]=0;
carry=0;
for(i=l+4;i>=0;i--)
{
    g[i]=b[i]+c[i]+d[i]+e[i]+f[i]+carry;
    carry=g[i]/10;
    g[i]=g[i]%10;
}
for(i=0;i<=4&&g[i]==0;i++)
{
    k++;
}
for(i=k;i<=l+4;i++)
{
    printf("%d",g[i]);
}
return 0;
}
