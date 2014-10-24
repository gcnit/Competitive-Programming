#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll binarySearch(ll* arr,ll sizei, ll item) {
ll left, right, middle;
 left = 0;
 right = sizei-1;
 while(left<=right) { middle = ((left + right)/2);
 if(item == arr[middle]) { return(middle);
 } if(item > arr[middle]) { left = middle+1;
 } else { right = middle-1;
 } } return(-1);
 }

ll pw(ll a, ll b){
  ll r;
  if(b==0) return 1;
  r = pw(a,b/2);
  r = (r*r);
  if(b%2) r = (r*a);
  return r;
}
ll a[100000],b[100000],tmp[100000],sum[100000];

int main()
{
    ll t,n,i,m,j;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        m=pw(2,n);
        for(i=0;i<m;i++)
            scanf("%lld",&a[i]);
        sort(a,a+m);
        a[0]=-1;
        b[0]=a[1];
        sum[0]=0;
        sum[1]=a[1];
        a[1]=-1;
        ll k=1;
        ll flag=0;
        i=2;
        ll o=2;
        while(i<m && k<n)
        {
            if(a[i]==-1)
            {
                i++;
                continue;
            }
            for(j=0;j<o;j++)
            {
            sum[o+j]=sum[j]+a[i];
            tmp[j]=binarySearch(a,m,sum[o+j]);
            if(tmp[j]==-1)
                break;
            }
            if(j==o){
            for(j=1;j<o;j++)
            a[tmp[j]]=-1;
            b[k++]=a[i];
            a[i]=-1;
            o*=2;}
            i++;
        }
        for(i=0;i<n;i++)
            printf("%lld ",b[i]);
        printf("\n");

    }
    return 0;
}
