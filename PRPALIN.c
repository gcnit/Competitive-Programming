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

long long int isprime(long long int a)
{
    long long int i;
    if(a==2 || a==3)
    return 1;
    if(a==1 || a==0)
    return 0;
    for(i=2;i<=sqrt(a);i++)
    {
        if(isprime(i))
        if(a%i==0)
        return 0;
    }
    return 1;
}
int ispalin(char *a,int x,int y)
{
    int i;
    for(i=x;i<=(y+x)/2;i++)
    {
        if(a[i]!=a[y-i])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    long long int a,i,x,j;
        a=scan();
        for(i=a;;i++)
        if(isprime(i))
        {
            char b[20];
            x=i;
            b[0]=(x%10)-'0';
            j=0;
            while(x/10!=0)
            {
                x=x/10;
                if(x!=0)
                {
                    j++;
                    b[j]=(x%10)-'0';
                }
            }
            b[j+1]='\0';
            if(ispalin(b,0,j))
            {
                printf("%lld\n",i);
                break;
            }
        }
    return 0;
}
