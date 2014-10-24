#include<stdio.h>
int main()
{
    long long int i,t,n,k,b[2000],a[3],c[3];
    char s[2000];
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&k);
        scanf("%s",s);
        a[0]=0;
        a[1]=0;
        for(i=0;i<n;i++)
        {
            b[i]=s[i]-'0';
            a[b[i]]++;
        }
        k=n-k;
            c[0]=k/2;
            c[1]=(k+1)/2;
            for(i=0;i<n;i++)
            {
                if(c[0])
                if(b[i]==0)
                {
                    c[0]--;
                    b[i]=-1;
                }
                if(c[1])
                if(b[i]==1)
                {
                    c[1]--;
                    b[i]=-1;
                }
            }
            for(i=0;i<n;i++)
            {
                if(b[i]>=0)
                {
                if(c[0])
                {
                    c[0]--;
                    b[i]=-1;
                }
                if(c[1])
                {
                    c[1]--;
                    b[i]=-1;
                }
                }
            }
            for(i=0;i<n;i++)
            if(b[i]>=0)
            printf("%lld",b[i]);
            printf("\n");
    }
    return 0;
}
