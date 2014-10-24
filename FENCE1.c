#include<stdio.h>
int main()
{
    int n;
    double ans;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
        break;
        ans=(n*n)/6.2831852;
        printf("%.2lf\n",ans);
    }
    return 0;
}
