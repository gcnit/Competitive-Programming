#include<stdio.h>
#define ll long long int
ll a[100010];
int main()
{
    ll i,n;
    scanf("%lld",&n);
    ll max=-1;
    ll max1=max;
    ll maxi=1;
    ll maxi1=n;
    ll count=0,count1=0;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        if(i<n/2)
        {
            count+=a[i];
            if(a[i]>max)
            max=a[i],maxi=i+1;
        }
        else
        {
            count1+=a[i];
            if(a[i]>max1)
            max1=a[i],maxi1=i+1;
        }
    }
        if(count<count1)
        {
            if(maxi!=n/2+1)
            printf("1\n%lld %lld\n",maxi,n/2+1);
            else
            printf("0\n");
        }
        else if(count>count1)
        {
            if(maxi1!=n/2)
            printf("1\n%lld %lld\n",maxi1,n/2);
            else
            printf("0\n");
        }
        else printf("0\n");
    return 0;
}
