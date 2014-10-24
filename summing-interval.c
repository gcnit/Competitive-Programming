#include<stdio.h>
int main()
{
    long long int t,n,i,sum,q,j,L,R,x,y;
    scanf("%lld",&t);
    while(t>0)
    {
        scanf("%lld %lld",&n,&q);
        long long int A[n],B[(n/500)+1];
        j=0;
        for(i=0;i<=n/500;i++)
        B[i]=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&A[i]);
            B[i/500]+=A[i];
        }
        for(i=0;i<q;i++)
        {
            sum=0;
            scanf("%lld %lld",&L,&R);
            if(R-L<=500)
            for(j=L;j<=R;j++)
            {
                sum+=A[j];
            }
            else
            {
            x=L/500;
            y=R/500;
            for(j=x+1;j<y;j++)
            {
                sum+=B[j];
            }
            if(L%500<250)
            {
            sum+=B[x];
            for(j=(x*500);j<L;j++)
            sum-=A[j];
            }
            else
            for(j=L;j<(x+1)*500;j++)
            sum+=A[j];
            if(R%500>250)
            {
                sum+=B[y];
                for(j=R+1;j<(y+1)*500;j++)
                {
                    if(j>=n)
                    break;
                    sum-=A[j];
                }
            }
            else
            {

                for(j=y*500;j<=R;j++)
                sum+=A[j];
            }
            }
            printf("%lld\n",sum);
        }
        t--;
    }
    return 0;
}
