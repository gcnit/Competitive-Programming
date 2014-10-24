#include<stdio.h>
long long int fib(long long int);
int main()
{
long long int i=2,sum=0;
while(fib(i)<4000000)
i+=3;
printf("%lld\n",(fib(i-1))/2);
return 0;
}
long long int fib(long long int n)
{
if(n==0 || n==1)
return 1;
else
return (fib(n-1)+fib(n-2));
}
