#include<stdio.h>
int main()
{
    int q,w,x,i,j,y,z,a[10],b[10],k;
    scanf("%d",&q);
    for(w=1;w<=q;w++)
    {
        scanf("%d",&x);
        for(i=1;i<=4;i++)
        {
            if(i==x)
            {
                for(j=1;j<=4;j++)
                scanf("%d",&a[j]);
            }
            else
            {
                for(j=1;j<=4;j++)
                scanf("%d",&z);
            }
        }
        scanf("%d",&y);
        for(i=1;i<=4;i++)
        {
            if(i==y)
            {
                for(j=1;j<=4;j++)
                scanf("%d",&b[j]);
            }
            else
            {
                for(j=1;j<=4;j++)
                scanf("%d",&z);
            }
        }
        z=0;k=0;
        for(i=1;i<=4;i++)
        {
            for(j=1;j<=4;j++)
            {
                if(a[i]==b[j])
                {
                    k=i;
                    z++;
                }
            }
        }
        if(z==1)
        printf("Case #%d: %d\n",w,a[k]);
        if(z==0)
        printf("Case #%d: Volunteer cheated!\n",w);
        if(z>1)
        printf("Case #%d: Bad magician!\n",w);
    }
    return 0;
}
