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
void rev(char *a, ll l)
{
    ll i;
    for(i=0;i<l/2;i++)
        {
            a[i]=a[i]+a[l-i-1];
            a[l-i-1]=a[i]-a[l-i-1];
            a[i]=a[i]-a[l-i-1];
        }
}
void addrev(char *a,char *b,char *sum,ll l)
{
    ll c=0;
    sum[l+1]='\0';
    ll flag=1,i;
    for(i=l-1;i>=0;i--)
    {
        sum[i+1]=a[i]+b[i]+c-'0';
        if(sum[i+1]>'9')
        {
            sum[i+1]-=10;
            c=1;
        }
        else c=0;
        if(flag==1)
        {
            if(sum[i+1]!='0')
            flag=0;
            else
            sum[i+1]='\0';
        }
    }
    sum[0]=c+'0';
    l=strlen(sum);
    rev(sum,l);
    if(sum[l-1]=='0')
    sum[l-1]='\0';
}
int main()
{
    ll t,i,l1,l2,flag,l;
    char a[100010],b[100010];
    char sum[100010];
    scan(t);
    while(t--)
    {
        scanf("%s %s",a,b);
        l1=strlen(a);
        l2=strlen(b);
        flag=1;
        for(i=l1-1;i>=0;i--)
        {
            if(flag==1)
            {
                if(a[i]=='0')
                a[i]='\0';
                else flag=0;
            }
            else break;
        }
        flag=1;
        for(i=l2-1;i>=0;i--)
        {
            if(flag==1)
            {
                if(b[i]=='0')
                b[i]='\0';
                else flag=0;
            }
            else break;
        }
        l1=strlen(a);
        l2=strlen(b);
        rev(a,l1);
        rev(b,l2);
        if(l1>l2)
        {
            char c[l1+10];
            for(i=0;i<l1;i++)
            c[i]='0';
            c[l1]='\0';
            for(i=l1-l2;i<l1;i++)
            c[i]=b[i-(l1-l2)];
            addrev(a,c,sum,l1);
        }
        else
        {
            char c[l2+10];
            for(i=0;i<l2;i++)
            c[i]='0';
            c[l2]='\0';
            for(i=l2-l1;i<l2;i++)
            c[i]=a[i-(l2-l1)];
            addrev(b,c,sum,l2);
        }
        l=strlen(sum);
        if(l==0)
        printf("0\n");
        else
        printf("%s\n",sum);
    }
    return 0;
}
