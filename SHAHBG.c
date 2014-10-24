#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define gc getchar
#define ll long long int
#define M 1000000007
#define scan(t) t=input()
inline ll input() {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  ll ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}
int main()
{
    ll t,i,n,count;
    scan(t);
    ll b[20010],max,min;
    min=20001;
    max=-1;
    for(i=0;i<=20000;i++)
    b[i]=0;
    count=0;
    while(t--)
    {
        scan(n);
        b[n]=1;
        if(n<min)
        min=n;
        if(n>max)
        max=n;
        if(b[n-1] && b[n+1])
        count--;
        else if(!b[n-1] && !b[n+1])
        count++;
        printf("%lld\n",count);
    }
    printf("Justice\n");
    return 0;
}
