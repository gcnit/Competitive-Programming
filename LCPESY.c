#include<stdio.h>
#include<string.h>
int min(long long int a,long long int b)
{
    if(a<b)
    return a;
    else
    return b;
}
int main()
{
    long long int a[62],b[62],t,l1,l2,count,i;
    char s1[10100],s2[10100];
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%s",s1);
        scanf("%s",s2);
        l1=strlen(s1);
        l2=strlen(s2);
        for(i=0;i<62;i++)
        {
            a[i]=0;
            b[i]=0;
        }
        count=0;
        for(i=0;i<l1;i++)
        if(s1[i]>='a' && s1[i]<='z')
        a[s1[i]-'a']++;
        else if(s1[i]>='A' && s1[i]<='Z')
        a[s1[i]-'A'+26]++;
        else if(s1[i]>='0' && s1[i]<='9')
        a[s1[i]-'0'+52]++;
        for(i=0;i<l2;i++)
        if(s2[i]>='a' && s2[i]<='z')
        b[s2[i]-'a']++;
        else if(s2[i]>='A' && s2[i]<='Z')
        b[s2[i]-'A'+26]++;
        else if(s2[i]>='0' && s2[i]<='9')
        b[s2[i]-'0'+52]++;
        for(i=0;i<62;i++)
        count+=min(a[i],b[i]);
        printf("%lld\n",count);
    }
    return 0;
}
