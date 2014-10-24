#include<stdio.h>
#include<string.h>
int main()
{
    long long int T,i,j,l,s,q,count;
    char P[1000100];
    scanf("%lld",&T);
    for(i=0;i<T;i++)
    {
        scanf("%s",P);
        l=strlen(P);
        s=0,count=0,q=0;
        for(j=0;j<l;j++)
        {
            if(P[j]=='.')
            {
                q++;
            }
            else if(P[j]=='#')
            {
                if(q>s)
                {
                    count++;
                    s=q;
                }
                q=0;
            }
        }
        printf("%lld\n",count);
    }
    return 0;
}
