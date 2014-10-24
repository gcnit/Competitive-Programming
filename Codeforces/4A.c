#include<stdio.h>
int main()
{
    long long int a;
    scanf("%I64d",&a);
    if(a%2==0 && a!=2)
    printf("YES");
    else printf("NO");
    return 0;
}
