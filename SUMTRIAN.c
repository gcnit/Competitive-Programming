#include<stdio.h>
#define s(n) scanf("%d",&n)
int main(){int a[100][100],n,t,i,j;s(t);while(t--){s(n);for(i=0;i<n;i++)for(j=0;j<=i;j++)s(a[i][j]);for(i=n-2;i>=0;i--)for(j=0;j<=i;j++)a[i][j]+=a[i+1][j+(a[i+1][j]<a[i+1][j+1])];printf("%d\n",a[0][0]);}}
