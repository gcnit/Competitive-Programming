#include<stdio.h>
int main()
{
    int t,i,n,k,a;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&n,&k);
        if(n==1)
        printf("1\n");
        else if(k>n/2)
        {
            printf("-1\n");
        }
        else if(k<=n/2)
        for(a=1;a<=k;a++)
        {
            printf("%d",2*a);
            if(a==k)
            printf("\n");
            else
            printf(" ");
        }


    }
    return 0;
}
