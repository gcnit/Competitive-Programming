#include<stdio.h>
long long int a[500010],b[5000010];
int main()
{
    long long int i,flag;
    for(i=1;i<=5000000;i++)
    b[i]=0;
    a[0]=0;
    b[0]=1;
    for(i=1;i<=500000;i++)
    {
        flag=0;
        a[i]=a[i-1]-i;
        if(a[i]>0)
        {
            if(b[a[i]]==0)
            {
                b[a[i]]++;
                flag=1;
            }
        }
        if(!flag)
        {
            a[i]+=2*i;
            b[a[i]]++;
        }
    }
    while(1)
    {
        scanf("%lld",&i);
        if(i==-1)
        break;
        else printf("%lld\n",a[i]);
    }
    return 0;
}
