#include<stdio.h>
#include<string.h>
int main()
{
int m,n,i,j,x,l,len,k;
char A[40],B[40];
scanf("%d%d",&m,&n);
x=(m+1)*n;
for(i=0;i<x;i++)
scanf("%c",&A[i]);
scanf("%d",&l);
char q[l][6*m*n+10];
for(i=0;i<l;i++)
scanf("%s",q[i]);
int flag=0;
for(i=0;i<l;i++)
{
    if(flag!=-1)
    {
    for(j=0;j<x;j++)
    B[j]=A[j];
    }
    flag=-1;
    len=strlen(q[i]);
    for(j=0;j<x;j++)
    {
        if(q[i][0]==B[j])
        {
            flag=j;
            B[flag]='0';
            break;
        }
    }
        if(flag!=-1)
        {
        for(k=1;k<len;)
        if(q[i][k]==B[flag-1])
        {
            flag=flag-1;
            B[flag]='0';
            k++;
        }
        else if(q[i][k]==B[flag+1])
        {
            flag=flag+1;
            B[flag]='0';
            k++;
        }
        else if(q[i][k]==B[flag-4])
        {
            flag=flag-4;
            B[flag]='0';
            k++;
        }
        else if(q[i][k]==B[flag+4])
        {
            flag=flag+4;
            B[flag]='0';
            k++;
        }
        else break;
        if(k==len)
        {
        printf("%s",q[i]);
        i=l;
        }
        }
    }
return 0;
}
