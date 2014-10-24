#include<stdio.h>
#include<math.h>
int main()
{
    int T,i,t;
    int j,o,l,k,q,m,A,B,n=0,rev,s[6],a[100];
    scanf("%d",&T);
    s[0]=1;
    for(t=1;t<=4;t++)
    s[t]=10*s[t-1];
    for(j=1;j<=s[3];j++)
        {
            q=sqrt(j);
            if(j==q*q)
            {
                rev=0,l=0;
                for(k=0;j/s[k]!=0;k++)
                l++;
                for(m=0;m<l;m++)
                rev+=((j%s[m+1])/s[m])*s[l-m-1];
                if(j==rev)
                {
                    rev=0,l=0;
                    for(k=0;q/s[k]!=0;k++)
                    l++;
                    for(m=0;m<l;m++)
                    rev+=((q%s[m+1])/s[m])*s[l-m-1];
                    if(q==rev)
                    {
                        a[n]=j;
                        n++;
                    }
                }
            }
        }
        a[n]=1001;
        for(i=0;i<T;i++)
        {
        scanf("%d %d",&A,&B);
        for(o=0;o<n;o++)
        if(A==a[o])
        {
            A=o;
            break;
        }
        else if(A>a[o] && A<a[o+1])
        {
            A=o+1;
            break;
        }
        for(o=o;o<=n;o++)
        if(B==a[o])
        {
            B=o;
            break;
        }
        else if(B>a[o] && B<a[o+1])
        {
            B=o;
            break;
        }
        printf("Case #%d: %d\n",i+1,B-A+1);
        }
    return 0;
}
