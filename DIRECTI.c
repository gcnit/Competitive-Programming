#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,n,j,k;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%d",&n);
        char s[n+10][60],b[n+10][50],c[n+10][20];
        gets(s[0]);
        for(i=0;i<n;i++)
        {
        gets(s[i]);
        }
        strcpy(c[0],"Begin on");
        for(i=0;i<n;i++)
        {

            for(j=0;;j++)
            {
                if(s[i][0]=='R')
                {
                    strcpy(c[n-i],"Left on");
                }
                else if(s[i][0]=='L')
                {
                    strcpy(c[n-i],"Right on");
                }
                if(s[i][j]=='o')
                {
                    for(k=0;k<strlen(s[i]);k++)
                    b[n-1-i][k]=s[i][j+k+2];
                    break;
                }

            }
        }
        for(i=0;i<n;i++)
        printf("%s%s\n",c[i],b[i]);
        t--;
    }
    return 0;
}
