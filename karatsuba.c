#include<stdio.h>
#include<math.h>
long long int mul(long long int ,long long int );
int main()
{
long long int a,b,t,i,c;
scanf("%lld",&t);
for(i=0;i<t;i++)
{
scanf("%lld %lld",&a,&b);
c=mul(a,b);
printf("%lld\n",c);
}
return 0;
}

long long int mul(long long int x,long long int y)
{
long long int i,n,a,b,c,d,product,e;
if(x/10==0 && y/10==0)
return(x*y);
for(i=2;i<100;i++)
if(x/(int)pow(10,i)==0)
{
n=i;
e=pow(10,n/2);
break;
}
a = x/e;
b = x%e;
c = y/e;
d = y%e;
product = (e*mul(a+b,c+d))+(e*(e-1)*mul(a,c))+((1-e)*mul(b,d));
return(product);
}
