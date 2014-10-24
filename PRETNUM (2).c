#include<stdio.h>
#include<math.h>
#define size 100000000
#define gc getchar
inline long long int scan() {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  long long int ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}


long long int b[size];
void sieve(long long int *b,long long int n)
{
long long int i, j;
for(i=2; i<=n; i++)
b[i] = 1;
for(i=2; i<=n; i++)
{
if(b[i] == 1)
{
for(j=i+1; (i*j)<=n; j++)
b[(i*j)] = 0;
}
}
}

int main()
{
    long long int t,l,r,i,count;
    t=scan();
    while(t--)
    {
        l=scan();
        r=scan();
        printf("%lld\n",count);

    }
    return 0;
}
