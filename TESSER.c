#include<stdio.h>
#include<string.h>
#define gc getchar
inline long long int scan() {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  long long int ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}
int main()
{
    long long int t,n,i,j,l;
    t=scan();
    while(t--)
    {
        n=scan();
        long long int a[n],flag=0;
        char b[n+10],c[n+10];
        for(i=0;i<n;i++)
        a[i]=scan();
        for(i=0;i<n-1;i++)
        {
            if(a[i+1]>a[i])
            b[i]='G';
            else if(a[i+1]<a[i])
            b[i]='L';
            else if(a[i+1]=a[i])
            b[i]='E';
        }
        b[n-1]='\0';
        printf("%s",b);
        scanf("%s",c);
        printf("%lld\n",strstr(c,b));
        printf("YES\n");
        printf("NO\n");
    }
    return 0;
}
