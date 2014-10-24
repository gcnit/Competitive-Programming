#include<stdio.h>
int main()
{
    long long int t,i,l,top;
    char exp[500],stack[500];
    scanf("%lld",&t);
    while(t--)
    {
        top=0;
        scanf("%s",exp);
        l=strlen(exp);
        for(i=0;i<l;i++)
        {
            if(exp[i]>='a' && exp[i]<='z')
            printf("%c",exp[i]);
            else if(exp[i]=='+' || exp[i]=='-' || exp[i]=='*' || exp[i]=='/' || exp[i]=='^')
            {
                top++;
                stack[top]=exp[i];
            }
            else if(exp[i]==')')
            {
                printf("%c",stack[top]);
                top--;
            }
        }
        printf("\n");
    }
    return 0;
}
