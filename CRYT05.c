#include<stdio.h>
#include<math.h>
#define a (1+pow(5,0.5))/2
#define b 1-a
int main()
{
    int n,i;
    long long int y;
    double x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        x=(pow(a,i)-pow(b,i))/(double)pow(5,0.5);
        y=x;
        printf("%d %lld\n",i,y);
    }
    return 0;
}
