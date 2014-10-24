#include<stdio.h>
#include<string.h>
#define ll long long int
void merge(ll * ,ll * ,ll ,ll ,ll );
void mergesort(ll *a,ll*b,ll lb,ll ub)
{
    ll mid=(lb+ub)/2;
    if(lb<ub)
    {
        mergesort(a,b,lb,mid);
        mergesort(a,b,mid+1,ub);
        merge(a,b,lb,mid,ub);
    }
}
void merge(ll *a,ll *b,ll lb,ll mid,ll ub)
{
    ll c[ub-lb+1],d[ub-lb+1];
    ll i=0,lp=lb,up=mid+1;
    while(lp<=mid&&up<=ub)
    {
        if(a[lp]<a[up])
        {
            c[i++]=a[lp++];
            d[i-1]=b[lp-1];
        }
        else
        {
            c[i++]=a[up++];
            d[i-1]=b[up-1];
        }
    }
    while(lp<=mid)
    {
    c[i++]=a[lp++];
    d[i-1]=b[lp-1];
    }
    while(up<=ub)
    {
    c[i++]=a[up++];
    d[i-1]=b[up-1];
    }
    ll j;
    for(j=0;j<i;j++)
    {
    a[j+lb]=c[j];
    b[j+lb]=d[j];
    }
    return;
}
char text[150010];
ll tex[150010];
int main()
{
    ll t,f[26],freq[26],l,i,no[26],x[26];
    char fs[30];
    scanf("%lld",&t);
    while(t--)
    {
        scanf ("\n%[^\r\n]",fs);
        scanf ("\n%[^\r\n]",text);
        l=strlen(text);
        for(i=0;i<26;i++)
        {
            f[i]=fs[i];
            freq[i]=0;
            no[i]=25-i;
        }
        for(i=0;i<l;i++)
        {
            tex[i]=text[i];
            if(tex[i]-'a'>=0 && tex[i]-'a'<26)
            freq[tex[i]-'a']++;
            if(tex[i]-'A'>=0 && tex[i]-'A'<26)
            freq[tex[i]-'A']++;
        }
        for(i=0;i<26;i++)
        x[i]=freq[25-i];
        mergesort(x,no,0,25);
        mergesort(no,f,0,25);
        for(i=l-1;i>=0;i--)
        {
            if(tex[i]-'a'>=0 && tex[i]-'a'<26)
            tex[i]=f[tex[i]-'a'];
            if(tex[i]-'A'>=0 && tex[i]-'A'<26)
            tex[i]=f[tex[i]-'A']-'a'+'A';
            text[i]=tex[i];
        }
        printf("%s\n",text);
    }

    return 0;
}
