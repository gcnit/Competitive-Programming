#include<iostream>
#include<cstdio>
#include<algorithm>
#define ll long long int

using namespace std;

int main()
{
    ll j=0,k=0,n,i,a[2000],b[2000],c[2000];
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        if(a[i]%2)
        b[j++]=a[i];
        else
        c[k++]=a[i];
    }
    sort(b,b+j);
    sort(c,c+k);
    for(i=0;i<k;i++)
    printf("%lld ",c[i]);
    printf("\n");
    for(i=j-1;i>=0;i--)
    printf("%lld ",b[i]);
    printf("\n");
    return 0;
}
