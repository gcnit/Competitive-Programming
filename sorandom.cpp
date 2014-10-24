#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    long long int t,tym,i;
    double p;
    scanf("%lld",&t);
    while(t--)
    {
        double total=1440.0;
        scanf("%lf %lld",&p,&tym);
        double temp=tym;
        double ans=tym/total;
        double num=tym;
        double den=total;
        for(i=tym-1;i>700;i--)
        {
            temp=(temp*i)/(tym-i+1);
            num+=temp;
            total--;
            den=(den*total)/(1441-total);
            ans+=num/den;
            printf("%.4lf\n",ans);
        }
        ans*=p;
        printf("%lf\n",ans);
    }
}
