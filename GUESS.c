#include<stdio.h>
#define ll long long int

ll gcd(ll a,ll b){
    if(b>a)
        return gcd(b,a);
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{
    long long int a,b,t,odda,oddb,evena,evenb,odd,even,total,hcf;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&a,&b);
        odda=(a+1)/2;
        evena=a/2;
        oddb=(b+1)/2;
        evenb=b/2;
        even=(evena*evenb)+(odda*oddb);
        odd=(evena*oddb)+(odda*evenb);
        total=odd+even;
        hcf=gcd(odd,total);
        if(hcf!=0)
        {
            odd/=hcf;
            total/=hcf;
        }
        printf("%lld/%lld\n",odd,total);
    }
    return 0;
}
