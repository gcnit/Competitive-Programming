#include<stdio.h>
int main()
{
int t,N;
scanf("%d",&t);
for(i=0;i<t;i++)
{
    scanf("%d",&N);
    int X[N],Y[N],T[N];
    for(j=0;j<N;j++)
    {
        scanf("%d %d %d",&X[j],Y[j],&T[j]);
        count[j]=0;
    }
    for(z=0;z<N;z++)
    {
    for(j=0;j<N;j++)
    {

        if(T[j]==z)
        count[z]++;
    }
    }
    for(k=0;k<N-1;k++)
        {
        if(T[j]==T[j+1] && X[j+1]==Y[j])
        count--;
