#include<stdio.h>
void add(char *a,char *b,int l)
{
    long long int c=0,i,flag;
    for(i=l-1;i>=0;i--)
    {
        a[i]=a[i]+b[i]+c-'0';
        if(a[i]>'9')
        {
            c=1;
            a[i]-=10;
        }
        else c=0;
    }
    if(c)
    {
        printf("%lld",c);
        i=0;
        flag=0;
    }
    else
    {
        flag=1;
        for(i=0;i<l;i++)
        {
            if(flag)
            {
                if(a[i]!='0')
                {
                    flag=0;
                    break;
                }
            }
        }
    }
    if(i==l)
    printf("0\n");
    else
    for(;i<l;i++)
    printf("%c",a[i]);
    printf("\n");
}
void sub(char *a,char *b,int l)
{
    long long int c=0,i;
    for(i=l-1;i>=0;i--)
    {
        a[i]=a[i]-b[i]+c+'0';
        if(a[i]<'0')
        {
            c=-1;
            a[i]+=10;
        }
        else c=0;
    }
}
void div2(char *a,char *b,int l)
{
    long long int c=0,y,i,flag=1,j=0;
    for(i=0;i<l;i++)
    {
        y=(c*10)+a[i]-'0';
        a[i]='0'+y/2;
        c=y%2;
        if(flag)
        {
            if(a[i]!='0')
            flag=0;
        }
        if(!flag)
        b[j++]=a[i];
    }
    if(flag)
    b[j++]='0';
    b[j]='\0';
}

int main()
{
    long long int i,j,l1,l2,q;
    char x[120],y[120],z[120],b[120];
    for(q=0;q<10;q++)
    {
        scanf("%s",x);
        scanf("%s",y);
        l1=strlen(x);
        l2=strlen(y);
        for(i=0;i<l1;i++)
        z[i]='0';
        z[l1]='\0';
        j=l1;
        for(i=l2;i>=0;)
        {
            z[j--]=y[i--];
        }
        sub(x,z,l1);
        div2(x,b,l1);
        add(x,z,l1);
        printf("%s\n",b);
    }
    return 0;
}
