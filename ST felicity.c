#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define gc getchar
#define ll long long int
#define M 1000000007
#define scan(t) t=input()
#define print(n) printf("%lld\n",n)
#define scans(s) scanf("%s",s)
#define nl printf("\n")
#define loop(start,k,end) for(k=start;k<end;k++)
#define ascan(a,i,l) for(i=0;i<l;i++) scan(a[i])
#define aprint(a,i,l) for(i=0;i<l;i++) print(a[i])
#define atprint(a,i,l) for(i=0;i<l;i++) printf("%lld ",a[i]); nl
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
ll pw(ll a, ll b){
  ll r;
  if(b==0) return 1;
  r = pw(a,b/2);
  r = (r*r)%M;
  if(b%2) r = (r*a)%M;
  return r;
}

int main()
{
    ll t,i,count,a[40],j,sum,k,flag;
    char s[85],c;
    while(1)
    {
        flag=0;
        c='a';
        for(i=0;i<40;i++)
        a[i]=-1;
        i=0;
        while(c!='*')
        {
            count=0;
            c=gc();
            if(c=='#')
            {
                flag=1;
                break;
            }
            if(c==' ')
            {
            a[i]++;
            c=gc();
            if(c==' ')
            a[i]++;
            i++;
            }
        }
        if(flag==1)
        break;
        for(j=0;j<i;j++)
        {
            sum=0;
            for(k=0;k<5;k++)
            {
                sum+=a[j]*pw(2,k);
            }
        }
            if(sum==0)
            printf(" ");
            else if(sum>0 && sum<27)
            printf("%c",sum+'A'-1);
            else if(sum==27)
            printf("'");
            else if(sum==28)
            printf(",");
            else if(sum==29)
            printf("-");
            else if(sum==30)
            printf(".");
            else if(sum==31)
            printf("?");
    }
    return 0;
}
