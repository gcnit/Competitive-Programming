#include<stdio.h>
#include<math.h>
#include<float.h>
#define ll long long int
#define M 1000000007
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

    ll a[100000],ans,sum,i,j,t,n,q,x,d,w,y,z;
    d=pw(10,28);
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&q);
        sum=0;
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&a[i]);
            a[i]=(a[i]+M)%M;
            if(i>=60)
            sum+=a[i];
        }
        sum%=M;
        if(n>=60)
        n=59;
        for(j=0;j<q;j++)
        {
            scanf("%lld",&x);
            ans=sum+(a[1]*(x%M));
            ans%=M;
            for(i=2;i<=n;i++)
            {
                d=pow(x,1.0/i);
                y=pw(d+1,i/2);
                if(i%2)
                z=x/(y*(d+1));
                else z=x/y;
                if(y<=z)
                d++;
                ans+=a[i]*d;
                ans%=M;
            }
            printf("%lld ",ans);
        }
        printf("\n");
    }
    return 0;
}
