#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#define MAX_LIMIT 1000000000000
#define NEW_MAX  1000000
#define MAX_WIDTH 100000
long long int flags[NEW_MAX+1],count;

void initialise(long long int flagarr[],long long int n)
{
    long long int i;
    for(i=3;i<=n;i+=2)
        flagarr[i]=0;
}

void sieve(unsigned long long m,unsigned long long n,long long int seg_flags[])
{

    unsigned long long p,i,limit;

    if(m%2==0)
        i=m;
    else
        i=m+1;

    for(;i<=n;i+=2)
    {

        seg_flags[i-m+1]=1;

    }
    if(seg_flags==flags)
        limit=NEW_MAX;
    else
        limit=sqrt(n);
    for(p=3;p<=limit+1;p+=2)
    {
        if(flags[p]==0)
        {
            for(i=p*p; i<=n ;i+=p)
            {
                if(i<m)
                    continue;
                seg_flags[i-m+1]=1;
            }
        }
    }
}

void count_sieve(unsigned long long m,unsigned long long n,long long int flagarr[],unsigned long long count2)
{
    unsigned long long i;
    if(m<3)
    {count2++;m=3;}
    if(m%2==0)
        i=m+1;
    else
        i=m;
if(flags==flagarr)
{
    for(;i<=n;i+=2)
        if(flagarr[i]==0)
                count2++;
}
else {
    for(;i<=n;i+=2)
        if(flagarr[i-m+1]==0)
                count2++;
}
count=count2;
}

int main()
{
    unsigned long long m,n;
    long long int t;
    long long int seg_flags[MAX_WIDTH+100];

    sieve(1,NEW_MAX,flags);

    scanf("%lld",&t);
    while(t--)
    {
        count=0;
        scanf("%llu %llu",&m,&n);
        if(n<=NEW_MAX)
            count_sieve(m,n,flags,0);

        else if(m>NEW_MAX)
        {
            initialise(seg_flags,n-m+1);
            sieve(m,n,seg_flags);
            count_sieve(m,n,seg_flags,0);
        }
        else if(m<=NEW_MAX && n>NEW_MAX)
        {
            count_sieve(m,NEW_MAX,flags,0);
            initialise(seg_flags,n-NEW_MAX);
            sieve(NEW_MAX+1,n,seg_flags);
            count_sieve(NEW_MAX+1,n,seg_flags,count);
        }
        printf("%lld\n",count);
    }
    return 0;
}
