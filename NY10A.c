#include<stdio.h>
int main()
{
    long long int t,n,i,count[10];
    char s[50];
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        scanf("%s",s);
        for(i=0;i<8;i++)
        count[i]=0;
        for(i=0;i<38;i++)
        {
            if(s[i]=='H')
            {
                if(s[i+1]=='H')
                {
                    if(s[i+2]=='H')
                    count[7]++;
                    else count[6]++;
                }
                else
                {
                    if(s[i+2]=='H')
                    count[5]++;
                    else
                    count[4]++;
                }
            }
            else
            {
                if(s[i+1]=='H')
                {
                    if(s[i+2]=='H')
                    count[3]++;
                    else count[2]++;
                }
                else
                {
                    if(s[i+2]=='H')
                    count[1]++;
                    else
                    count[0]++;
                }
            }
        }
        printf("%lld ",n);
        for(i=0;i<8;i++)
        printf("%lld ",count[i]);
        printf("\n");
    }
    return 0;
}
