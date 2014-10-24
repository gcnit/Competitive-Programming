#include<stdio.h>
int main()
{
    int t,k,i,G,j,n,q;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf("%d",&G);
        for(j=0;j<G;j++)
        {
            scanf("%d %d %d",&i,&n,&q);
            if(i==q)
            {
                printf("%d\n",n/2);
            }
            else printf("%d\n",n-n/2);
        }
    }
    return 0;
}
