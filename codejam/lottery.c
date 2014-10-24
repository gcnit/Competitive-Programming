#include<stdio.h>
int main()
{
    long long int t,n,i,count,j,l1,l2,l,q,flag;
    char s[2][200];
    scanf("%lld",&t);
    for(q=1;q<=t;q++)
    {
        count=0;
        flag=0;
        scanf("%lld",&n);
        for(i=0;i<2;i++)
        scanf("%s",s[i]);
        l1=strlen(s[0]);
        l2=strlen(s[1]);
        if(l1<l2)
        l=l1;
        else
        l=l2;
        if(l1==l2)
        {
            for(i=0;i<l;i++)
            if(s[0][i]!=s[1][i])
            {
                flag=2;
                break;
            }
            if(flag==2)
            flag=0;
            else
            {
                printf("Case #%lld: 0\n",q);
                flag=1;
            }
        }
        if(flag==0)
        {
        j=0;
        for(i=0;i<l;i++)
        {
            if(l==l1)
            {
            if(s[0][i]==s[1][j])
            {
                j++;
            }
            else if(i>0)
            {
                if(s[0][i]==s[0][i-1] || s[1][j]==s[1][j-1])
                {
                    count++;
                }
            }
            }
            else if(l==l2)
            {
            if(s[0][j]==s[1][i])
            {
                j++;
            }
            else if(i>0)
            {
                if(s[0][j]==s[0][j-1] || s[1][i]==s[1][i-1])
                {
                    count++;
                }
            }

            }
        }
        if(count==0)
        printf("Case #%lld: Felga Won\n",q);
        else
        printf("Case #%lld: %lld\n",q,count);
        }
    }
    return 0;
}
