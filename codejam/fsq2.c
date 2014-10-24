#include<stdio.h>
#include<math.h>
int main()
{
    long long int j,o,T,i,t,l,k,q,m,A,B,n=0,rev,s[16],a[100];
    s[0]=1;
    for(t=1;t<=15;t++)
    s[t]=10*s[t-1];
    for(j=1;j<=s[7];j++)
        {
                rev=0,l=0;
                for(k=0;j/s[k]!=0;k++)
                l++;
                for(m=0;m<l;m++)
                rev+=((j%s[m+1])/s[m])*s[l-m-1];
                if(j==rev)
                {
                    q=j*j;
                    rev=0,l=0;
                    for(k=0;q/s[k]!=0;k++)
                    l++;
                    for(m=0;m<l;m++)
                    rev+=((q%s[m+1])/s[m])*s[l-m-1];
                    if(q==rev)
                    {
                        a[n]=q;
                        n++;
                    }
                }
        }
        a[n]=s[14]+1;
        scanf("%lld",&T);
        for(i=0;i<T;i++)
        {
        scanf("%lld %lld",&A,&B);
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
        printf("Case #%lld: %lld\n",i+1,B-A+1);
        }
    return 0;
}
