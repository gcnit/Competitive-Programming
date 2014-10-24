#include<stdio.h>
int main()
{
    int t,i,n,j,m,count;
    scanf("%d",&t);
    while(t>0)
    {
        count=0;
        scanf("%d",&m);
        int a[m];
        for(i=0;i<m;i++)
        scanf("%d",&a[i]);
        scanf("%d",&n);
        int b[n];
        for(i=0;i<n;i++)
        scanf("%d",&b[i]);
        count=0;
        for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            count++;
            if(a[i]>=b[j])
            break;
        }
        if(m>n)
        printf("%d\n",m-count);
        else
        printf("%d\n",n-count);
        t--;
    }
    return 0;
}
