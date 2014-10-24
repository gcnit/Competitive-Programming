#include<stdio.h>
int main()
{
    long long int t,i,l[3],a[3],j,s;
    char x[3][20];
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%s",x[0]);
        scanf("%s",x[1]);
        scanf("%s",x[1]);
        scanf("%s",x[2]);
        scanf("%s",x[2]);
        for(j=0;j<=2;j++)
        {
            l[j]=strlen(x[j]);
            a[j]=0;
            for(i=0;i<l[j];i++)
            {
                if(x[j][i]=='m')
                {
                    s=j;
                    a[j]=0;
                    break;
                }
                else a[j]=(10*a[j])+x[j][i]-'0';
            }
        }
        if(s==0)
        a[0]=a[2]-a[1];
        else if(s==1)
        a[1]=a[2]-a[0];
        else if(s==2)
        a[2]=a[1]+a[0];
        printf("%lld + %lld = %lld\n",a[0],a[1],a[2]);
    }
    return 0;
}
