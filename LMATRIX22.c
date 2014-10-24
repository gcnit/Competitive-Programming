#include<stdio.h>
int main()
{
    long long int n,m,i,j,max,maxi,B[11],x,count,no,flag,sum;
    scanf("%lld %lld",&n,&m);
    long long int P[n][m],A[n][m],X[n*m][2],Y[n*m][2],k[n*m];
    for(i=0;i<n;i++)
    for(j=0;j<m;j++)
    scanf("%lld",&P[i][j]);
    count=0;
    for(i=0;i<n;i++)
    for(j=0;j<m;j++)
    {
    scanf("%lld",&A[i][j]);
    }
    flag=0,sum=0;
    while(count<n*m)
    {
    for(no=0;no<=10000;no++)
    {
    count=0;
    for(i=0;i<n;i++)
    for(j=0;j<m;j++)
    {
        if((A[i][j]+no)%P[i][j]==0)
        count++;
    }
    if(no==0)
    {
    max=count;
    maxi=no;
    }
    else if(count>max)
    {
        max=count;
        maxi=no;
    }
    if(count==n*m)
    break;
    }
    for(i=0;i<n;i++)
    for(j=0;j<m;j++)
    {
        A[i][j]=(A[i][j]+maxi)%P[i][j];
    }
    X[sum][0]=1,Y[sum][0]=1,X[sum][1]=n,Y[sum][1]=m,k[sum]=maxi;
    sum++;
    if((n*m)/count>100)
    {
        flag=1;
        break;
    }
    }
    if(flag==1)
    {
        for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        {
            if(P[i]-A[i])
            {
                X[sum][0]=i,Y[sum][0]=j,X[sum][1]=i,Y[sum][1]=j,k[sum]=P[i]-A[i];
                sum++;
            }
        }
    }
    printf("%lld\n",sum);
    for(i=0;i<sum;i++)
    {
        printf("%lld %lld %lld %lld %lld\n",X[i][0],Y[i][0],X[i][1],Y[i][1],k[i]);
    }
    return 0;
}
