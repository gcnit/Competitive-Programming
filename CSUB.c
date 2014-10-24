#include<stdio.h>
int main()
{
    long long int t,n,i,l,count,ans;
    char s[100010];
    scanf("%lld",&t);
    while(t--)
    {
        count=0;
        scanf("%lld",&n);
        scanf("%s",s);
        l=strlen(s);
        for(i=0;i<l;i++)
        if(s[i]=='1')
        count++;
        ans=(count*(count+1))/2;
        printf("%lld\n",ans);
    }
    return 0;
}
