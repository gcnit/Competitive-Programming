#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
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
char* getBinary(long long int n,char *s)
{
  while(n>0)
  {
    *s=(n&1)+'0';
    s++;
    n>>=1;
  }
  *s='\0';
  return s;
}
int main()
{
long long int i,n,t,a[20],l,x=1,product;
char s[100];
for(i=0;i<19;i++)
{
    a[i]=pw(4,x);
    x=x*10;
}
a[19]=pw(a[18],10);
t=scan();
while(t>0)
{
product=1;
n=scan();
getBinary(n,s);
l=strlen(s);
for(i=0;i<=l-1;i++)
{
    if(s[i]=='1')
    product=(product*a[i])%M;
}
printf("%lld\n",product);
t--;
}
return 0;
}
