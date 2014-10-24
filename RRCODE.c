#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    long long int t,i,j,n,k,ans;
    char operation[5];
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld %lld %lld",&n,&k,&ans);
        long long int A[n];
        char B[n+10][ans+10];
        for(j=0;j<n;j++)
        {
            scanf("%lld",&A[j]);
            itoa(A[j],B[j],2);
            printf("%s\n",B[j]);
        }
        scanf("%s",operation);
    }
    return 0;
}
