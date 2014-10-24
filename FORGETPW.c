#include<stdio.h>
char s[1000100],ans[1000100];
int main()
{
    long long int t,i,c[200],l,n,x,y,flag;
    char a,b;
    scanf("%lld",&t);
    while(t--)
    {
        flag=0;
        for(i=0;i<='~'-'!';i++)
        {
            c[i]=i+'!';
        }
        scanf("%lld",&n);
        for(i=0;i<n;i++)
        {
            a=getchar();
            while(!(a>='!' && a<='~'))
            a=getchar();
            b=getchar();
            while(!(b>='!' && b<='~'))
            b=getchar();
            c[a-'!']=b;
        }
        scanf("%s",s);
        l=strlen(s);
        for(i=0;i<l;i++)
        {
            s[i]=c[s[i]-'!'];
            if(s[i]=='.')
            flag=1;
        }
        for(i=0;i<l;i++)
        {
            if(s[i]!='0')
            {
                x=i;
                break;
            }
        }
        y=l-1;
        if(flag==1)
        for(i=l-1;i>=0;i--)
        {
            if(s[i]!='0')
            {
                y=i;
                if(s[i]=='.')
                y--;
                break;
            }
        }
        if(x>y)
        {
            ans[0]='0';
            ans[1]='\0';
        }
        else
        {
        for(i=x;i<=y;i++)
        ans[i-x]=s[i];
        ans[i-x]='\0';
        }
        printf("%s\n",ans);
    }
}
