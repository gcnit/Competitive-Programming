#include<stdio.h>
int main()
{
    long long int t,a,b,c,n,count;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        if(a>b)
        {
            a=a+b;
            b=a-b;
            a=a-b;
        }
        if(b>c)
        {
            c=c+b;
            b=c-b;
            c=c-b;
        }
        if(a>c)
        {
            c=c+a;
            a=c-a;
            c=c-a;
        }
        scanf("%lld",&n);
        count=0;
        count+=(c*(c+1))/2;
        if(n<c)
        {
            count-=((c-n)*(c-n+1))/2;
            if(c-a<n)
            count++;
            if(c-b<n)
            count++;
        }
        else
        {
            count+=(b*(b+1))/2;
            if(n<c+b)
            count-=((b-n)*(b-n+1))/2;
            else
            {
                count+=(a*(a+1))/2;
                if(n<c+b+a)
                count-=((a-n)*(a-n+1))/2;
            }
        }


        printf("%lld\n",count);
    }
    return 0;
}
