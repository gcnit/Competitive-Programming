#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define gc getchar
#define ll long long int
#define M 1000000007
#define scan(t) t=input()
#define print(n) printf("%lld\n",n)
#define scans(s) scanf("%s",s)
#define nl printf("\n")
#define loop(start,k,end) for(k=start;k<end;k++)
#define ascan(a,i,l) for(i=0;i<l;i++) scan(a[i])
#define aprint(a,i,l) for(i=0;i<l;i++) print(a[i])
#define atprint(a,i,l) for(i=0;i<l;i++) printf("%lld ",a[i]); nl
inline ll input() {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  ll ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}
ll C[1000000],U[1000000],D[1000000],L[1000000],R[1000000];
int main()
{
    ll t,i,corner[101],z,j,x,o,max,maxi,flag;
    scan(t);
    ll a[t][t];
    loop(0,i,101)
    corner[i]=0;
    loop(0,i,t)
    loop(0,j,t)
    {
        scan(a[i][j]);
        if(i==0 || j==0 || i==t-1 || j==t-1)
        {
            o=a[i][j];
            corner[o]++;
        }
    }
    max=corner[0];
    maxi=0;
    loop(1,i,101)
    {
        if(max<corner[i])
        {
            max=corner[i];
            maxi=i;
        }
    }
    x=0;
    if(maxi>0)
    {
        C[x]=maxi;
        U[x]=1;
        D[x]=t;
        L[x]=1;
        R[x]=t;
        x=1;
    }
    loop(0,i,t)
    loop(0,j,t)
    {
        if(a[i][j]!=maxi)
        {
            flag=0;
            if(x!=0 && j!=0)
            {
                if(a[i][j-1]==a[i][j])
                {
                    R[x-1]=j+1;
                    flag=1;
                }
            }
            if(flag==0)
            {
                C[x]=a[i][j];
                U[x]=i+1;
                D[x]=i+1;
                L[x]=j+1;
                R[x]=j+1;
                x++;
            }
        }
    }
    printf("%lld\n",x);
    loop(0,i,x)
    {
        printf("%lld %lld %lld %lld %lld\n",C[i],U[i],D[i],L[i],R[i]);
    }
    return 0;
}
