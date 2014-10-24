#include<stdio.h>
int main()
{
    long long int n,count[3],ans,i;
    char s[10];
    for(i=0;i<3;i++)count[i]=0;
    scanf("%lld",&n);
    while(n--)
    {
        scanf("%s",s);
        if(s[0]=='1')
        {
            if(s[2]=='2')
            count[1]++;
            else
            count[0]++;
        }
        else count[2]++;
    }
    ans=1+count[2];
    ans+=(count[1]+1)/2;
    if(count[1]%2 && count[0]>=2)
    count[0]-=2;
    if(count[0]>=count[2])
    {
        count[0]-=count[2];
    }
    else count[0]=0;
    ans+=(count[0]+3)/4;
    printf("%lld\n",ans);
    return 0;
}
