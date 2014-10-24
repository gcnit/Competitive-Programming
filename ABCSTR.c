#include<stdio.h>
char s[1000010];
long long int A[1000010],B[1000010],C[1000010],D[1000010][2],E[1000010][2];
int main()
{
    long long int l,i,count=0;
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]=='A')
        A[i]=1;
        if(s[i]=='B')
        B[i]=1;
        if(s[i]=='C')
        C[i]=1;
        if(i!=0)
        {
            A[i]+=A[i-1];
            B[i]+=B[i-1];
            C[i]+=C[i-1];
        }

        if(A[i]>=B[i])
        D[A[i]-B[i]][0]++;
        else
        D[B[i]-A[i]][1]++;
        if(A[i]>=C[i])
        E[A[i]-C[i]][0]++;
        else
        E[C[i]-A[i]][1]++;
    }
    return 0;
}
