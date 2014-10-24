#include<stdio.h>
int main()
{
    long long int i,l;
    char s[110];
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(!(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y'))
        {
            printf(".");
            if(s[i]<'a')
            printf("%c",s[i]-'A'+'a');
            else
            printf("%c",s[i]);
        }
    }
    return 0;
}
