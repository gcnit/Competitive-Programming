#include<stdio.h>

long long int prime[500000],primes;

//using sieve of erathosensis
void init_primes()
{
static long long int prime_arr[1000000];
long long int i,j;
for (i = 0; i < 1000000; i += 1)
{
prime_arr[i]=1;
}
for (i = 2; i*i < 1000000; i += 1)
{
if(prime_arr[i])
for (j = i*2; j < 1000000; j += i)
{
prime_arr[j]=0;
}
}
primes=0;
for (i = 2; i < 1000000; i += 1)
{
if(prime_arr[i])
prime[primes++]=i;
}
}

long long int range_prime[1000001];
void prime_btn_range(long long int Start,long long int End)
{
long long int i;
for (i = 0; i <= End-Start; i += 1)
{
range_prime[i]=1;
}
long long int pr_no;
long long int near;
for (i = 0; ; i += 1)
{
pr_no=prime[i];
if( pr_no*pr_no > End )
break;
near = (Start / pr_no) * pr_no;
if( near < Start )
{
near = near +pr_no;
}
if(near == pr_no)
{
near += pr_no;
}
for(;near <= End ; near = near+ pr_no)
range_prime[near - Start]=0;
}
}

int main()
{
long long int t,s,e,count;
init_primes();
scanf("%lld",&t);
while(t--)
{
count=0;
scanf("%lld %lld",&s,&e);
if(s<2)
s=2;
prime_btn_range(s,e);
long long int i;
for(i=0;i<=(e-s);i++)
if(range_prime[i])
count++;
printf("%lld\n",count);
}
}
