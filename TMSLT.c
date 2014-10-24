#include<stdio.h>
#include<stdlib.h>
#define gc getchar
#define ll long long int
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
ll S[3000000],H[1000000];
int main()
{
    ll t,i,n,a,b,c,d,sum,flag,count,max;
    scan(t);
    while(t--)
    {
        scan(n);
        scan(a);
        scan(b);
        scan(c);
        scan(d);
        sum=0;
        for(i=0;i<1000000;i++)
        {
            H[i]=0;
        }
        S[0]=d;
        H[d]++;
        max=d;
        for(i=1;i<n;i++)
        {
            S[i]=(a*S[i-1]*S[i-1]+b*S[i-1]+c)%1000000;
            H[S[i]]++;
            if(S[i]>max)
            max=S[i];
        }
        flag=0;
        count=0;
        for(i=max;i>=0 && count<n ;i--)
        {
            count+=H[i];
            if(H[i]%2)
            if(flag==0)
            {
                sum+=i;
                flag=1;
            }
            else
            {
                sum-=i;
                flag=0;
            }
        }
        printf("%lld\n",sum);
    }
    return 0;
}
