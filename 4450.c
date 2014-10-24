#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int t,i,n,m,j;
    char s[200][200],a[200][200];
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%s",s[i]);
        for(j=0;j<m;j++)
        {
            if(s[i][j]=='.')
            {
                if((i+j)%2)
                a[i][j]='W';
                else a[i][j]='B';
            }
            else a[i][j]='-';
        }
        printf("%s\n",a[i]);
    }
    return 0;
}
