#include<stdio.h>
int main()
{
    long long int t,x,y;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&x,&y);
        if(y!=x && y!=(x-2))
        printf("No Number\n");
        else if(y%2)
        printf("%lld\n",x+y-1);
        else printf("%lld\n",x+y);
    }
    return 0;
}
