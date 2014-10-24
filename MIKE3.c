#include<stdio.h>
#define ll long long int
#define M 1000000007
ll pw(ll a, ll b){
  ll r;
  if(b==0) return 1;
  r = pw(a,b/2);
  r = (r*r)%M;
  if(b%2) r = (r*a)%M;
  return r;
}

long long int b[20][20001],a[20000];
int main()
{
    long long int n,m,l,i,j,c[20][20],max,count;
    scanf("%lld %lld",&n,&m);
    long long int k[m],x[m];
    for(i=0;i<m;i++)
    {
        scanf("%lld",&k[i]);
        for(j=0;j<k[i];j++)
        {
            scanf("%lld",&a[i]);
            b[i][a[i]]=1;
        }
    }
    for(i=0;i<m;i++)
    for(j=0;j<m;j++)
    c[i][j]=0;
    for(i=0;i<m;i++)
    {
        for(j=i+1;j<m;j++)
        {
            for(l=0;l<=20000;l++)
            if(b[i][l] && b[j][l])
            {
                c[i][j]=1;
                c[j][i]=1;
                break;
            }
        }
    }
    max=0;
    for(i=pw(2,m)-1;i>=0 && max<i;i--)
    {
        count=0;
        for(l=0;l<m;l++)
        x[l]=0;
        for(j=0;j<m;j++)
        {
            if(i & (1<<j))
            {
                if(x[j])
                {
                    count=0;
                    break;
                }
                for(l=0;l<m;l++)
                if(c[j][l])
                x[l]=1;
                count++;
            }

        }
        if(count>max)
        max=count;
    }
    printf("%lld\n",max);
    return 0;
}
