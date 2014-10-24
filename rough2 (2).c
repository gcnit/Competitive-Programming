#include<stdio.h>
#include<math.h>
long long int a[(1250*1250)+10],y,i,j;;
int main()
{
    a[0]=0;
    for(i=1;i<=1250*1250;i++)
    {
        a[i]=0;
        y=sqrt(i);
        for(j=1;j<=y;j++)
        {
            if(i%j==0)
            a[i]+=2;
        }
        if(sqrt(i)-y==0)
        a[i]--;
        printf("%lld,",a[i]);
    }
    return 0;
}
