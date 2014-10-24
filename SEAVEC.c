#include<stdio.h>
#define gc getchar
inline long long int scan() {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  long long int ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}
int main()
{
    long long int t,n,k,i,j,flag,q;
    t=scan();
    while(t--)
    {
        n=scan();
        k=scan();
        long long int a[n][k],b[k],c[k];
        for(i=0;i<n;i++)
        for(j=0;j<k;j++)
        a[i][j]=scan();
        for(j=0;j<k;j++)
        b[j]=scan();
        q=0;
        for(i=0;i<n;i++)
        {
            flag=0;
            for(j=0;j<k;j++)
            {
                if(a[i][j]>b[j])
                {
                    break;
                }
                if(j==k-1)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                c[q]=i+1;
                q++;
                for(j=0;j<k;j++)
                {
                    b[j]-=a[i][j];
                }
            }
        }
        if(q==0)
        printf("%lld\n",q);
        else
        {
        printf("%lld\n",q);
        printf("%lld",c[0]);
        for(j=1;j<q;j++)
        printf(" %lld",c[j]);
        printf("\n");
        }
    }
    return 0;
}
