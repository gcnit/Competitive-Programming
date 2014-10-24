#include<stdio.h>
#include<string.h>
int main()
{
long long int i,k,l,t,count;
char n[100100];
scanf("%lld",&t);
for(i=0;i<t;i++)
{
    count=0;
    scanf("%s",n);
    l=strlen(n);
    for(k=0;k<l;k++)
    {
        if(n[k]!='4' && n[k]!='7')
        count++;
    }
    printf("%lld\n",count);
}
return 0;
}
