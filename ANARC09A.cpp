#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[10000];
    long long int j=1;
    while(1)
    {
        long long int ans=0,l,count=0,i;
        scanf("%s",s);
        if(s[0]=='-')
        break;
        l=strlen(s);
        for(i=0;i<l;i++)
        {
            if(s[i]=='{')
            count++;
            else if(s[i]=='}')
            count--;
            if(count<0)
            {
                ans++;
                count+=2;
            }
        }
        ans+=count/2;
        printf("%lld. %lld\n",j,ans);
        j++;
    }
    return 0;

}
