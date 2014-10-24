#include<stdio.h>
#include<string.h>
int main()
{
    char a[210];
    long long int l,flagC,flagJ,i;
    while(scanf("%s",a)!=EOF)
    {
        l=strlen(a);
        flagC=0;
        flagJ=0;
        if(a[0]>='A' && a[0]<='Z')
        flagJ=1;
        if(a[0]=='_' || a[l-1]=='_')
        flagC=1;
        for(i=0;i<l;i++)
        {
            if(a[i]>='A' && a[i]<='Z')
            flagC=1;
            else if(a[i]=='_')
            {
                flagJ=1;
                if(i<l-1)
                if(a[i+1]=='_')
                flagC=1;
            }

        }
        if(flagC && flagJ)
        printf("Error!\n");
        else
        {
            for(i=0;i<l;i++)
            {
                if(a[i]>='A' && a[i]<='Z')
                printf("_%c",a[i]-'A'+'a');
                else if(a[i]=='_')
                {
                    i++;
                    printf("%c",a[i]+'A'-'a');
                }
                else printf("%c",a[i]);
            }
            printf("\n");
        }
    }
    return 0;
}
