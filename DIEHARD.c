#include<stdio.h>
int main()
{
    long long int t,h,a,time;
    scanf("%lld",&t);
    while(t--)
    {
    time=0;
    scanf("%lld %lld",&h,&a);
    while(h>0 && a>0)
    {
        h+=3;
        a+=2;
        time++;
        if(h>5 && a>10)
        {
            h-=5;
            a-=10;
            time++;
        }
        else if(h>20)
        {
            h-=20;
            a+=5;
            time++;
        }
        else break;
    }
    printf("%lld\n",time);
    }
    return 0;
}
