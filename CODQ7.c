#include<stdio.h>
int main()
{
    long long int d,m,i,a[]={37,42,29,34,51,49};
    scanf("%lld %lld",&d,&m);
    for(i=0;i<m-1;i++)
    {
        d+=a[i];
    }
    d=d%6;
    if(d==0)
    d=6;
    printf("%lld\n",d);
    return 0;
}
