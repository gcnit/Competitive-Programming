#include <stdio.h>
int main()
{
int t,p,i,k,count;
long long int f[12];
f[0]=1;
for(i=1;i<=11;i++)
f[i]=2*f[i-1];
scanf("%d",&t);
for(i=0;i<t;i++)
{
count=0;
scanf("%d",&p);
for(k=0;p/f[k]!=0;)
k++;
for(k=k;k>=0;)
if(p>=f[k])
{
p=p-f[k];
count++;
}
else
k--;
printf("%d\n",count);
}
return 0;
}
