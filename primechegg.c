#include<stdio.h>
#include<math.h>
int isprime(int a);
int main()
{
    int i;
    for(i=1;i<=1000;i++)
    {
        if(isprime(i)==1)
        printf("%d ",i);
    }
    return 0;
}
int isprime(int a)
{
    int i;
    if(a==2 || a==3)
    return 1;
    if(a==1)
    return 0;
    for(i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
        return 0;
    }
    return 1;
}
