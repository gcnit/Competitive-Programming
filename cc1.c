#include<stdio.h>
int main()
{
    long long int t,l,i,flag;
    char s[110];
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%s",s);
        l=strlen(s);
        flag=0;
        for(i=0;i<l;i++)
        {
            if(s[i]=='D' || s[i]=='J' || s[i]=='0')
            {
                flag=1;
                printf("YES\n");
                break;
            }
        }
        if(flag==0)
        printf("NO\n");
    }
    return 0;
}
