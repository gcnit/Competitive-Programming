#include<stdio.h>
#include<math.h>
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
#define ll long long
#define M 1000000007

ll pw(ll a, ll b){
  ll r;
  if(b==0) return 1;
  r = pw(a,b/2);
  r = (r*r)%M;
  if(b%2) r = (r*a)%M;
  return r;
}
int main()
{
long long int i,n,x,t;
t=scan();
while(t>0)
{
n=scan();
x=pw(2,n);
printf("%lld\n",x-1);
t--;
}
return 0;
}
