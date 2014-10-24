#include<stdio.h>
int main()
{
    long long int n,l;
    char s[110],x,y;
    scanf("%I64d",&n);
    while(n--)
    {
        scanf("%s",s);
        l=strlen(s);
        if(l<=10)
        printf("%s\n",s);
        else
        {
        x=s[0];
        y=s[l-1];
        printf("%c%d",x,l-2);
        printf("%c\n",y);
        }
    }
    return 0;
}
