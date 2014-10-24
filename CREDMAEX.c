#include<stdio.h>
#define ll long long int
ll pw(ll a, ll b){
  ll r;
  if(b==0) return 1;
  r = pw(a,b/2);
  r = (r*r);
  if(b%2) r = (r*a);
  return r;
}
int main()
{
    ll t,n,a,b,c,d,x,y,max,size,ans,coord;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
        scanf("%lld %lld",&x,&y);
        if(y>x) max=y;
        else max=x;
        x--,y--;
        size=ceil(log2(max));
        size=pw(2,size);
        ans=1;
        while(size)
        {
            size/=2;
            if(!size)
            break;
            if(x<size)
            coord=1;
            else coord=3;
            if(y>=size)
            coord++;
            if(coord==1)
            ans*=a;
            else if(coord==2)
            ans*=b;
            else if(coord==3)
            ans*=c;
            else if(coord==4)
            ans*=d;
            x=x%size;
            y=y%size;
        }
        printf("%lld\n",ans);
    }
    return 0;
}
