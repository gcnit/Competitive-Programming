#include<stdio.h>
int main()
{
    long long int l,i,c,a[110];
    char n[110];
    for(i=0;i<110;i++)
    a[i]=0;
    while(scanf("%s",n)!=EOF)
    {
        l=strlen(n);
        if(l==1 && n[0]=='1')
        {printf("1\n");continue;}
        long long int c=-1;
        for(i=l-1;i>=0;i--)
        {
            a[i]=(n[i]-'0')+c;
            if(a[i]<0)
            c=-1,a[i]+=10;
            else c=0;
        }
        c=0;
        for(i=l-1;i>=0;i--)
        {
            a[i]=2*a[i]+c;
            c=a[i]/10;
            a[i]%=10;
        }
        if(c)printf("%lld",c);
        for(i=0;i<l;i++)
        printf("%lld",a[i]);
        printf("\n");
    }
    return 0;
}
