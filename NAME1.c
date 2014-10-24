#include<stdio.h>
#include<string.h>
int main()
{
int i,j,k,T,a,b,N;
char A[80010],B[40010];
char C[1000][40010];
scanf("%d",&T);
for(i=0;i<T;i++)
{
scanf("%s %s",A,B);
strcat(A,B);
scanf("%d",&N);
for(j=0;j<N;j++)
scanf("%s",C[j]);
for(j=0;j<N;j++)
printf("%s",C[j]);
}
return 0;
}
