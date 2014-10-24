#include<stdio.h>
int main()
{
    long long int n,i,count=0,b[5];
    scanf("%I64d",&n);
    long long int a[n];
    for(i=1;i<5;i++)
    b[i]=0;
    for(i=0;i<n;i++)
    {
        scanf("%I64d",&a[i]);
        b[a[i]]++;
    }
    count=b[4]+b[3]+b[2]/2;
    if(b[3]>0)
    b[1]=b[1]-b[3];
    if(b[2]%2!=0)
    {
        count++;
        b[1]-=2;
    }
    if(b[1]>0)
    if(b[1]%4==0)
    count+=b[1]/4;
    else
    count+=(b[1]/4)+1;
    printf("%I64d",count);
    return 0;
}
