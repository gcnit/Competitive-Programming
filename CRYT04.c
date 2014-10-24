#include<stdio.h>
int main()
{
int a[40],i,n=1;
a[0]=1;
for(i=1;i<22;i++)
{
a[i]=a[i-1]*2;
}
while(n!=0)
{
    scanf("%d",&n);
    if(n!=0)
    for(i=0;i<22;i++)
    {
        if(n==a[i])
        {
            printf("%d\n",n);
            break;
        }
        else if(n<a[i])
        {
            printf("%d\n",2*(n-a[i-1]));
            break;
        }
    }
}
return 0;
}
