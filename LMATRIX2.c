#include<stdio.h>
int main()
{
    long long int n,m,i,j,max,maxi,B[11],x,count;
    scanf("%lld %lld",&n,&m);
    long long int P[n][m],A[n][m],X[n*m][2],Y[n*m][2],k[n*m];
    for(i=0;i<n;i++)
    for(j=0;j<m;j++)
    scanf("%lld",&P[i][j]);
    max=0;
    for(i=0;i<=10;i++)
    B[i]=0;
    for(i=0;i<n;i++)
    for(j=0;j<m;j++)
    {
    scanf("%lld",&A[i][j]);
    x=P[i][j]-A[i][j];
    B[x]++;
    }
    count=1;
    for(i=0;i<=10;i++)
    if(B[i]>=max)
    max=B[i],maxi=i;
    X[0][0]=1,Y[0][0]=1,X[0][1]=n,Y[0][1]=m,k[0]=maxi;
    for(i=0;i<n;i++)
    for(j=0;j<m;j++)
    {
        if(P[i][j]-A[i][j]!=maxi)
        {
            X[count][0]=i+1;
            Y[count][0]=j+1;
            X[count][1]=i+1;
            Y[count][1]=j+1;
            k[count]=(2*P[i][j]-A[i][j]-maxi)%P[i][j];
            count++;
        }
    }
    printf("%lld\n",count);
    for(i=0;i<count;i++)
    printf("%lld %lld %lld %lld %lld\n",X[i][0],Y[i][0],X[i][1],Y[i][1],k[i]);
    return 0;
}
