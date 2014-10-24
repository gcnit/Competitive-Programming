#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    map<string, int> m;
    ll j=1,i,n;
    char name[60];
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",name);
        if ( m.find(name) == m.end() )
        m[name]=1;
        else
        m[name]++;
        if(m[name]==j)
        {
            printf("%lld %s\n",j,name);
            j++;
        }
    }
    return 0;
}
