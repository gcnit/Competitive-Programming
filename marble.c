#include<stdio.h>
#include<stdlib.h>
#define gc getchar
#define ll long long int
inline ll input() {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  ll ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}
int main()
{
    long long int y,z,ans,n,q,i,j;
    char c,m;
    n=input();
    q=input();
    long long int a[n];
    long long int b[1001];
    for(i=0;i<1001;i++)
    b[i]=0;
    for(i=0;i<n;i++)
    {
        a[i]=input();
        b[i/1000]+=a[i];
    }
    for(i=0;i<q;i++)
    {
        ans=0;
        c=getchar();
        while(c<'A'||c>'Z')
        {
        c=getchar();
        }
        y=input();
        z=input();
        if(c=='G')
        {
            a[y]+=z;
            b[y/1000]+=z;
        }
        else if(c=='T')
        {
            a[y]-=z;
            b[y/1000]-=z;
        }
        else if(c=='S')
        {
            if(z-y<1000)
            {
                for(j=y;j<=z;j++)
                ans+=a[j];
            }
            else
            {
                for(j=y/1000;j<=z/1000;j++)
                {
                    ans+=b[j];
                }
                if(y%1000!=0)
                {
                    for(j=(y/1000)*1000;j<y;j++)
                    ans-=a[j];
                }
                if(z%1000!=999)
                {
                    for(j=z+1;j<(((z/1000)+1)*1000);j++)
                    ans-=a[j];
                }
            }
            printf("%lld\n",ans);
         }
    }
    return(0);
}
