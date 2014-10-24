#include<stdio.h>
#define ll long long int
int main()
{
    ll t,n,i,c,a;
    char g[10];
    double gpa;
    scanf("%lld",&t);
    while(t--)
    {
        ll total=0,earned=0;
        scanf("%lld",&n);
        for(i=0;i<n;i++)
        {
            scanf("%lld %s",&c,g);
            total+=c;
            if(g[0]=='S')
            a=10;
            else if(g[0]=='A')
            a=9;
            else if(g[0]=='B')
            a=8;
            else if(g[0]=='C')
            a=7;
            else if(g[0]=='D')
            a=6;
            else if(g[0]=='E')
            a=5;
            earned+=c*a;
        }
        gpa=(double)earned/total;
        printf("%.2lf\n",gpa);

    }
    return 0;
}
