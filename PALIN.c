#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define ll long long int
char s[1000010];
ll a[1000010];
int main()
{
    ll t,l,i,carry;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%s",s);
        l=strlen(s);
        carry=1;
        flag
        for(i=(l-1)/2;i>=0;i--)
        {
            a[i+1]=s[i]-'0';
            a[l-1-i-1]=a[i+1];
        }
        for(i=l/2;i>0;i--)
        {
            a[i]+=carry;
            if(a[i]>9)
            {
                a[i]%=10;
                carry=1;
            }
            else carry=0;
            a[l-i-1]=a[i];
        }
        if(carry==1)
        {
            a[0]=1;
            a[l]=1;
            l++;
        }
        for(i=0;i<l;i++)
        printf("%lld",a[i]);
        printf("\n");
    }
    return 0;
}
