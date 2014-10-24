#include<iostream>
#include<cstdio>
#define ll long long int
#define M 1000000007

using namespace std;

int main()
{
    ll t,i,b[30],l;
    char s[100100];
    scanf("%lld",&t);
    while(t--)
    {
        for(i=0;i<26;i++)
        b[i]=-1;
        scanf("%s",s);
        l=strlen(s);
        ll a[l+10];
        a[0]=1;
        for(i=0;i<l;i++)
        {
            a[i+1]=2*a[i];
            if(b[s[i]-'A']!=-1)
            a[i+1]-=a[b[s[i]-'A']-1];
            b[s[i]-'A']=i+1;
            a[i+1]=(a[i+1]+M)%M;
            if(a[i+1]==0)
            a[i+1]=M;
        }
        printf("%lld\n",a[l]);
    }
}
