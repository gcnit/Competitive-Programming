#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j,k,x,b[55],c;
    char a[30],s[110],p[110];
    scanf("%d %s",&t,a);
    for(i=0;i<26;i++)
    {
        b[i]=a[i];
        b[i+26]=b[i]-32;
    }
    for(i=0;i<t;i++)
    {
        scanf("%s",s);
        x=strlen(s);
        int d[x];
        for(j=0;j<x;j++)
        {
            d[j]=s[j];
            if((d[j]>=97 && d[j]<=122))
                for(k=0;k<26;k++)
                {
                if(d[j]==b[k])
                {
                c=b[k]-97;
                p[j]=a[c];
                }
                }
            else if(d[j]>=65 && d[j]<=90)
                for(k=26;k<52;k++)
                {
                if(d[j]==b[k])
                {
                c=b[k]-65;
                p[j]=a[c]-32;
                }
                }
            else if(s[j]=='_')
            p[j]=' ';
            else p[j]=s[j];
        }
        p[x]='\0';
        printf("%s\n",p);
    }
    return 0;
}
