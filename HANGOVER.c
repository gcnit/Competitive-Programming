#include<stdio.h>
int main()
{
long long int i,c;
double a[280],b;
a[1]=0.5;
for(i=2;i<280;i++)
{
a[i]=a[i-1]+1.0/(i+1);
}
c=1;
while(1)
{
    scanf("%lf",&b);
    if(b==0.00)
    break;
    if(b<a[c])
    c=1;
    for(i=c;i<280;i++)
    {
        if(a[i]>=b)
        {
            printf("%lld card(s)\n",i);
            c=i;
            break;
        }
    }
}
return 0;
}
