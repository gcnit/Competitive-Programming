#include<stdio.h>
#include<string.h>
int main()
{
    int t,n,i,j,k;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int count=0;
        scanf("%d",&n);
        char A[n][25],q[n][3];
        int vote[n];
        for(j=0;j<n;j++)
        vote[j]=1;
        for(j=0;j<n;j++)
        scanf("%s %s",A[j],q[j]);
        for(j=n-1;j>0;j--)
        {
            for(k=j-1;k>=0;k--)
            {
                if(strcmp(A[j],A[k])==0)
                vote[k]=0;
            }
        }
        for(j=0;j<n;j++)
        {
            if(vote[j]!=0)
            {
                if(strcmp(q[j],"-")==0)
                vote[j]=-1;
            }
        count=vote[j]+count;
        }
        printf("%d\n",count);
    }
    return 0;
}
