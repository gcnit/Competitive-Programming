#include<stdio.h>
#include<string.h>
int main()
{
char A[5010];
int l,i;
scanf("%s",A);
l=strlen(A);
int B[l+5];
for(i=0;i<l;i++)
B[i]=A[i]-'0';
for(i=0;i<l;i++)
if(B[i]==1)
if(B[i+1])
return 0;
}
