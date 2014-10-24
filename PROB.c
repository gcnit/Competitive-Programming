#include<stdio.h>
int main()
{
    int t,i;
    long long int a,b,c,d,e;
    float prob;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
        e=a+b;
        prob=a/(float)e;
        printf("%f\n",prob);
    }
    return 0;
}
