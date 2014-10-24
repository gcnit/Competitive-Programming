#include<stdio.h>
#include<string.h>
int main()
{
    int k,n,i,l,x,m,j,o;
    scanf("%d%d",&k,&n);
    int q[k];
    char s[52][55],A[55];
    for(i=0;i<k;i++)
    {
        scanf("%s",s[i]);
        q[i]=strlen(s[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%s",A);
        l=strlen(A);
        if(l>=47)
        {
            printf("Good\n");
            x=1;
        }
        else
        {
            for(j=0;j<k;j++)
            {
                if(strstr(A,s[j]))
                {
                    printf("Good\n");
                    x=1;
                    break;
                }
                else
                x=0;
            }
        }
        if(x==0)
        printf("Bad\n");
    }
    return 0;
}
