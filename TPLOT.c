#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define gc getchar
#define ll long long int
#define M 1000000007
#define print(n) printf("%lld\n",n)
#define loop(start,k,end) for(k=start;k<end;k++)
inline ll scan() {
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
    ll i,j,k,a[6],bonus,b[6],count,flag;
    loop(0,i,6)
    a[i]=scan();
    bonus=scan();
    loop(0,i,5)
    {
        count=0;
        flag=0;
        loop(0,j,6)
        {
            b[j]=scan();
            loop(0,k,6)
            if(b[j]==a[k])
            {
                count++;
                break;
            }
            if(b[j]==bonus)
            flag=1;
        }
        if(count==6)
        printf("First Parking slot\n");
        else if(count==5)
        {
            if(flag==1)
            printf("Second Parking slot\n");
            else
            printf("Third Parking slot\n");
        }
        else if(count==4)
        printf("Fourth Parking slot\n");
        else if(count==3)
        printf("Fifth Parking slot\n");
        else
        printf("No Parking slot\n");
    }
    return 0;
}
