#include<stdio.h>
int max(long long int*,long long int*,int,int);
int main()
{
int t,n,i,j;
scanf("%d",&t);
for(i=0;i<t;i++)
{
scanf("%d",&n);
long long int X[n],Y[n];
int kmh;
for(j=0;j<n;j++)
{
scanf("%lld %lld",&X[j],&Y[j]);
}
kmh=max(X,Y,n,0);
printf("%d\n",kmh);
}
return 0;
}

int max(long long int *X,long long int *Y,int n,int kmh)
{
    int maxx=0,maxy=0,k=0,i=0,j=0,count[n];
    long long int A[n],B[n],el[n],elx=0,ely=0;
    for(i=0;i<n;i++)
    A[i]=X[i],B[i]=Y[i];
    for(i=0;i<n;i++)
    {
        count[i]=1;
        if(A[i]!=-1)
        {
        el[k]=A[i];
        for(j=i+1;j<n;j++)
        {
            if(A[j]==A[i])
            {
                A[j]=-1;
                count[k]++;
            }
        }
        if(count[k]>maxx)
        maxx=count[k],elx=el[k];
        k++;
        }
    }
    k=0;
    for(i=0;i<n;i++)
    {
        count[i]=1;
        if(B[i]!=-1)
        {
        el[k]=B[i];
        for(j=i+1;j<n;j++)
        {
            if(B[j]==B[i])
            {
                B[j]=-1;
                count[k]++;
            }
        }
        if(count[k]>maxy)
        maxy=count[k],ely=el[k];
        k++;
        }
    }
    if(maxy>maxx)
    {
        for(i=0;i<n;i++)
        if(Y[i]==ely)
        X[i]=-1,Y[i]=-1;
    }
    else
    {
        for(i=0;i<n;i++)
        if(X[i]==elx)
        X[i]=-1,Y[i]=-1;
    }
    kmh++;
    for(i=0;i<n;i++)
    {
        if(X[i]!=-1 || Y[i]!=-1)
        return max(X,Y,n,kmh);
    }
    return kmh;
}
