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
	ll t,n,i,sum,x,j,y;
    scan(t);
		n=3;
		printf("{0,0,0,");
    while(n<=2500)
    {
        sum=0;
        //scan(n);
        for(i=1;i<n;i++)
        {
            x=i*(n-i);
			for(j=1;j<x;j++)
			sum+=a[j];
        }
        printf("%lld,",sum);
		
		n++;
    }
	printf("}");
    return 0;
}