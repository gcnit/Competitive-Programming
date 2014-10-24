#include<stdio.h>
int main()
{
    long long int T,i,j,p=0,q;
    scanf("%lld",&T);
    long long int count[T],K[T],b[T];
    for(i=0;i<T;i++)
    count[i]=1;
    for(i=0;i<T;i++)
    scanf("%lld",&K[i]);
    j=0,b[j]=K[0];
    for(i=0;i<T-1;i++)
    {
        if(K[i]<=K[i+1])
        {
            printf("a,%lld",count[j]);
            count[j]=count[j]+1;
        }
        else
        {
            j++;
            K[j]=i+1;
        }
    }
    for(i=0;i<=j;i++)
    printf("%lld\t",count[j]);
    printf("\n");
    q=count[0];
    for(i=0;i<j;i++)
    if(q<count[i])
    {
        p=i;
        q=count[i+1];
    }
    printf("%lld,%lld, %lld",j,q,p);
    return 0;
}

