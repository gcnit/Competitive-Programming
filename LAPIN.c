#include<stdio.h>
#include<string.h>
int main()
{
int T,i,j,k,count,l,A[30];
char S[1050];
scanf("%d",&T);
for(i=0;i<T;i++)
{
for(j=1;j<=26;j++)
A[j]=0;
count=0;
scanf("%s",S);
l=strlen(S);
for(j=0;j<l/2;j++)
{
k=S[j]-97;
A[k]++;
}
for(j=l-(l/2);j<l;j++)
{
k=S[j]-97;
A[k]--;
}
for(j=1;j<=26;j++)
if(A[j]==0)
count++;
if(count==26)
printf("YES\n");
else
printf("NO\n");
}
return 0;
}
