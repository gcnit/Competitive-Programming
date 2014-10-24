#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define ll long long int
ll gcd(ll a,ll b){
    if(b>a)
        return gcd(b,a);
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{
    ll t,i,j,k,c,a[2],l,x,y;
    char s[50];
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%s",s);
        l=strlen(s);
        k=0;
        a[0]=0;
        a[1]=0;
        for(j=0;j<l;j++)
        {
            if(s[j]!='/')
            a[k]=10*a[k]+s[j]-'0';
            else
            k=1;
        }
        c=gcd(a[0],a[1]);
        a[0]/=c;
        a[1]/=c;
        printf("Case #%lld: ",i);
        if((a[1]&(a[1]-1))!=0)
        printf("impossible\n");
        else
        {
            x=log2(a[1]);
            y=log2(a[0]);
            x=x-y;
            printf("%lld\n",x);
        }
    }
    return 0;
}
