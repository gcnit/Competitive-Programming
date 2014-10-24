#include<stdio.h>
#include<string.h>
void quick(int *b,int lb,int ub)
{
if(lb>=ub)
return;
int d=b[lb],i=lb,j,c;
for(j=lb+1;j<=ub;j++)
{
    if(b[j]<d)
    {
        i++;
        c=b[i];
        b[i]=b[j];
        b[j]=c;
    }
}
c=b[i];
b[i]=b[lb];
b[lb]=c;
quick(b,lb,i-1);
quick(b,i+1,ub);
}

int main()
{
char s[510];
int a[27],i,n,j,k,ch,l,b[27],q,sum,x=1;
scanf("%d",&n);
for(j=0;j<n;j++)
{
scanf("\n%[^\n]s",s);
for(i=0;i<26;i++)
a[i]=0;
q=strlen(s);
for(i=0;i<q;i++)
{
if(s[i]>=97)
ch=s[i]-'a';
else
ch=s[i]-'A';
a[ch]++;
}
l=0;
for(k=0;k<26;k++)
if(a[k]!=0)
{
    b[l]=a[k];
    l++;
}
quick(b,0,l-1);
sum=0;
for(k=0;k<l;k++)
sum+=b[k]*(27-l+k);
printf("Case #%d: %d\n",x,sum);
x++;
}
return 0;
}
