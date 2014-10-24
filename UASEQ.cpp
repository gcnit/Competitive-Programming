#include<cstdio>
#define M 100000000
#define ll long long int
using namespace std;

int main()
{
    ll n,k,i,j,l,a0,diff,min,mind,ans,count;
    min=M*M;
    mind=min;
    scanf("%lld %lld",&n,&k);
    ll a[n];
    for(i=0;i<n;i++)
    scanf("%lld",&a[i]);

    for(i=0;i<k+2;i++)
    {
        for(j=i+1;j<k+2;j++)
        {
            diff=(a[i]-a[j])/(i-j);
            a0=a[i]-i*diff;
            count=0;
            if(a0<min || (a0==min && diff<mind))
            {
                for(l=0;l<n;l++)
                {
                    if(j!=l && i!=l)
                    if(((a[i]-a[l])/(i-l))==diff)
                    count++;
                    if(count>=n-k-2)
                    {
                        min=a0;
                        mind=diff;
                        break;
                    }
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        ans=min+i*mind;
        printf("%lld ",ans);
    }
    return 0;
}
