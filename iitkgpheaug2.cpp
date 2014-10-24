#include<iostream>
#include<cstdio>
#define ll long long int

using namespace std;

int main()
{
    ll t,i,n,max,b[20][2],a[100010];
    scanf("%lld",&t);
    while(t--)
    {
        for(i=0;i<10;i++)
        {
            b[i][0]=-1;
            b[i][1]=-2;
        }
        scanf("%lld",&n);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            if(b[a[i]][0]==-1)
            {
                b[a[i]][0]=i;
            }
            b[a[i]][1]=i;
        }
        max=-1;
        for(i=0;i<10;i++)
        {
            b[i][1]=b[i][1]-b[i][0]+1;
            if(b[i][1]>max)
            max=b[i][1];
        }
        printf("%lld\n",max);
    }
    return 0;
}
