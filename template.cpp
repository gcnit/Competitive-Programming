#include<stdio.h>
#define lli long long int

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int main()
{
    int t,i,j,n,x,y;
    scanf("%d",&t);
    while(t--)
    {
        x=1;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=1;i<n;i++)
        {
            y=gcd(a[0],a[i]);
            if(y==1)
            {
                printf("%d\n",n);
                x=0;
                break;
            }
        }
        if(x==1)
        printf("-1\n");
    }
    return 0;
}
