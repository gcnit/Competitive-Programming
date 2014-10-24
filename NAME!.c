#include<stdio.h>
#include<string.h>
int main()
{
int i,j,k,T,a,b,count;
char A[80010],B[40010],C[1000][];
scanf("%d",&T);
for(i=0;i<T;i++)
{
scanf("%s %s",A,B);
strcat(A,B);
a=strlen(A);
scanf("%d",&N);
for(j=0;j<N;j++)
scanf("%s",C[j]);
for(j=0;j<b;j++)
for(k=0;k<a;k++)
if(M[k]==W[j])
{
M[k]='0',W[j]='0';
count++;
break;
}
if(count==b)
printf("YES\n");
else
printf("NO\n");
}
else
{
for(j=0;j<a;j++)
for(k=0;k<b;k++)
if(W[k]==M[j])
{
W[k]='0',M[j]='0';
count++;
break;
}
if(count==a)
printf("YES\n");
else
printf("NO\n");
}

}
return 0;
}
