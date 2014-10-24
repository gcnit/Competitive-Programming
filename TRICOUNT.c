#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
  int i,j,k;
  long long int t,n,result;

  scanf("%lld",&t);
  while(t--)
  {
     scanf("%lld",&n);
     result=(n*(n+2)*(2*n+1))/8;
     printf("%lld\n",result);
  }

return 0;
}
