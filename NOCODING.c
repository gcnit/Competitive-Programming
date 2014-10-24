#include<stdio.h>
int main()
{
    int i,j,l,t;
    char a[5000];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
       scanf("%s",&a);
       l=1;
       j=0;
       int pr=a[0];
       for(j=0;a[j];j++)
       {
           l++;
           if(a[j]<pr)
               l=l+26+a[j]-pr;
           else
           l=l+a[j]-pr;
           pr=a[j];
        }
        if(l>11*j)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
