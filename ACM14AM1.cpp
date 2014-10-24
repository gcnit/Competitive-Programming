#include<bits/stdc++.h>
using namespace std;
int main()
{
    int counti,t,i,n,p;
    scanf("%d",&t);
    while(t--)
    {
        counti=0;
        scanf("%d %d",&n,&p);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]>=p)
                counti++;
        }
        printf("%d\n",counti);
    }
    return 0;
}
