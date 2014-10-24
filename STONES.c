#include<stdio.h>
#define gc getchar
#include<string.h>
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
    long long int t,i,sum,a[52],b[52],Jl,Sl;
    char J[110],S[110];
    t=scan();
    while(t--)
    {
        sum=0;
        for(i=0;i<26;i++)
        {
            a[i]=0;
            a[i+26]=0;
            b[i]=0;
            b[i+26]=0;
        }
        scanf("%s",J);
        scanf("%s",S);
        Jl=strlen(J);
        Sl=strlen(S);
        for(i=0;i<Jl;i++)
        {
            if(J[i]<'a')
            a[J[i]-'A']++;
            else
            a[J[i]-'a'+26]++;
        }
        for(i=0;i<Sl;i++)
        {
            if(S[i]<'a')
            b[S[i]-'A']++;
            else
            b[S[i]-'a'+26]++;
        }
        for(i=0;i<52;i++)
        {
            if(a[i]!=0)
            sum+=b[i];
        }
        printf("%lld\n",sum);
    }
    return 0;
}
