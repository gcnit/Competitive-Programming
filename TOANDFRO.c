#include<stdio.h>
void rev(char *s,int a,int b)
{
    int i;
    char c;
    for(i=a;i<((a+b+1)/2);i++)
    {
        c=s[i];
        s[i]=s[b+a-1-i];
        s[b+a-1-i]=c;
    }
}
int main()
{
    long long int n,l,x,i,j,y;
    char s[300];
    while(1)
    {
        scanf("%lld",&n);
        if(!n)
        break;
        else
        {
            scanf("%s",s);
            l=strlen(s);
            x=l/n;
            for(i=1;i<x;i+=2)
            {
                j=n*i;
                rev(s,j,j+n);
            }
            for(j=0;j<n;j++)
            {
                for(i=0;i<x;i++)
                {
                    y=i*n;
                    printf("%c",s[y+j]);
                }
            }
            printf("\n");
        }
    }
    return 0;
}
