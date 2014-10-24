#include<stdio.h>
#include<math.h>
#include<string.h>
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
    long long int a,b,t,y,z,k;
    long long int q[120],j=0,i,x,flag;
    for(i=1;i<=100000;i++)
    {
    flag=0;
    if(!(i%10==4 || i%10==5 || i%10==6))
    {
    x=(i*i);
    flag=1;
    while(x!=0)
    {
        if(x%10==2 || x%10==3 || x%10==5 || x%10==6 || x%10==7 || x%10==8)
        {
            flag=0;
            break;
        }
        x=x/10;
    }
    }
    if(flag==1)
    {
        q[j]=i*i;
        j++;
    }
    }
    t=scan();
    while(t--)
    {
        a=scan();
        b=scan();
        for(k=0;k<119;k++)
        {
            if(q[k]<=a && q[k+1]>a)
            {
                y=k;
            }
            if(q[k]<=b && q[k+1]>b)
            {
                z=k;
                break;
            }
        }
        if(b==10000000000)
        z=119;
        printf("%lld\n",z-y+1);
    }
    return 0;
}
