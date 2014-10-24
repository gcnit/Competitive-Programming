#include<stdio.h>
int main()
{
scanf("%d",&T);
for(i=0;i<T;i++)
{
count=0;
scanf("%d %d",&r,&c);
for(j=0;j<r;j++)
for(k=0;k<c;k++)
scanf("%d",A[j][k]);
for(m=0;m<c;m++)
for(j=0;j<r;j++)
for(k=0;k<r;k++)
if(A[j][m]<A[k][m])
break;
else
count++;
if(count==r)
{
B[q]=m,C[q]=j
q++;
}
for()
