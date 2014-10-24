#include<stdio.h>
int main()
{
    long long int t,x,y,max,min,ans;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&x,&y);
        if(x<0)x*=-1;
        if(y<0)y*=-1;
        if(x<y)
        {
            min=x;
            max=y;
        }
        else
        {
            min=y;
            max=x;
        }
        ans=2*max;
        if(max!=min)
        {
            if((max-min)%2)
            {
                if(x>y)
                ans++;
                else ans--;
            }
        }
        printf("%lld\n",ans);
    }
    return 0;
}
