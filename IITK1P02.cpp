#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100010],maxa;
    long long int l,maxi,j,i;
    scanf("%s",s);
    l=strlen(s);
    maxi=-1;
    j=1;
    maxa=s[0];
    for(i=1;i<=l;i++)
    {
        if(s[i]!=s[i-1])
        {
            if(j>maxi)
            {
                maxa=s[i-1];
                maxi=j;
                j=1;
            }
            else if(j==maxi)
            {
                if(maxa>s[i-1])
                maxa=s[i-1];
                maxi=j;
                j=1;
            }
        }
        else j++;
    }
    printf("%c\n%lld",maxa,maxi);
    return 0;
}
