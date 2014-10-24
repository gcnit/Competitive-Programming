#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t,R,G,B,M,i,maxr,maxb,maxg,maxt,r,g,b;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld %lld %lld",&R,&G,&B,&M);
        maxr=maxb=maxg=-1;
        for(i=0;i<R;i++)
        {
            scanf("%lld",&r);
            if(r>maxr)
                maxr=r;
        }
        for(i=0;i<G;i++)
        {
            scanf("%lld",&g);
            if(g>maxg)
                maxg=g;
        }
        for(i=0;i<B;i++)
        {
            scanf("%lld",&b);
            if(b>maxb)
                maxb=b;
        }
        for(i=0;i<M;i++)
        {
            if(maxr>=maxg)
            {
                if(maxr>=maxb)
                    maxr/=2;
                else maxb/=2;
            }
            else
            {
                if(maxg>=maxb)
                    maxg/=2;
                else maxb/=2;
            }
        }
        printf("%lld\n",max(maxr,max(maxg,maxb)));
    }
    return 0;;
}
