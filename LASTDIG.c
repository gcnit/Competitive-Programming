#include<stdio.h>
#define ll long long int
ll pw(ll a, ll b){
ll r;
if(b==0) return 1;
r = pw(a,b/2);
r = (r*r)%1000000009;
if(b%2) r = (r*a);
return r;}
int main(){
ll t,i,a,b;
scanf("%lld",&t);
while(t--)
{scanf("%lld %lld",&a,&b);
a%=10;
if(b==0)
printf("1\n");
else if(a<=1||a==5||a==6) printf("%lld\n",a);
else if(a==4||a==9){b%=2;if(!b) b=2;printf("%lld\n",(pw(a,b)%10));}
else{b%=4;if(!b) b=4;printf("%lld\n",(pw(a,b)%10));}}
return 0;}
