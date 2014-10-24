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
    long long int t,n,i,maxi,maxo[2],maxin;
    t=scan();
    while(t--)
    {
        n=scan();
        long long int in[n],out[n];
        for(i=0;i<n;i++)
        {
            in[i]=scan();
            out[i]=scan();
            if(i==0)
            {
                maxi=0;
                maxin=in[i];
                maxo[0]=out[i];
            }
            else
            {
                if(in[i]>maxin)
                {
                    maxin=in[i];
                    maxi=i;
                }
                if(out[i]>maxo[0])
                {
                    maxo[1]=maxo[0];
                    maxo[0]=out[i];
                }
            }
        }
        if(maxin>=maxo[1])
        printf("%lld\n",maxi+1);
        else
        printf("-1\n");
    }
    return 0;
}
