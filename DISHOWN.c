#include<stdio.h>
long long int s[100100],a[100100],c[100100];
int main()
{
    long long int t,q,n,i,num,x,y,x1,y1;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&s[i]);
            a[i]=i;
        }
        scanf("%lld",&q);
        while(q--)
        {
            i=0;
            scanf("%lld",&num);
            if(num==1)
            {
                scanf("%lld",&x);
                while(a[x]!=x)
                {
                    x=a[x];
                }
                printf("%lld\n",x);
            }
            else
            {
                scanf("%lld %lld",&x,&y);
                x1=x;
                y1=y;
                i=0;
                while(a[x]!=x)
                {
                    c[i++]=x;
                    x=a[x];
                }
                for(j=0;j<i;j++)a[c[j]]=x;
                i=0;
                while(a[y]!=y)
                {
                    c[i++]=y;
                    y=a[y];
                }
                for(j=0;j<i;j++)a[c[j]]=y;
                if(x==y)
                {
                    printf("Invalid query!\n");
                    a[x1]=x;
                    a[y1]=y;
                }
                else if(s[x]>s[y])
                {
                    a[y]=x;
                    a[x1]=x;
                    a[y1]=x;
                }
                else if(s[x]<s[y])
                {
                    a[x]=y;
                    a[x1]=y;
                    a[y1]=y;
                }
            }
        }
    }
}
