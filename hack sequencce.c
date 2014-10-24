#include<stdio.h>
main(){long long int t,n,i,x,y,z;scanf("%lld",&t);while(t--){x=1,y=1;scanf("%lld",&n);if(n<=2)printf("1\n");else{for(i=3;i<=n;i++){z=(2014*y+69*x)%1000000007,x=y,y=z;}printf("%lld\n",y);}}return 0;}

