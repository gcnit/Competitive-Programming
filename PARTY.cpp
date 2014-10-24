#include <bits/stdc++.h>

using namespace std;

int price[100],fun[100];

int solve(int b, int n){
    if(n < 0) return 0;
    int ret = solve(b,n-1);
    if(price[n] <= b) ret = max(ret,fun[n] + solve(b-price[n],n-1));
    return ret;
}

int main(){
    int B,N;

    while(1){
        scanf("%d %d",&B,&N);
        if(!B && !N) break;

        for(int i = 0;i < N;++i)
            scanf("%d %d",&price[i],&fun[i]);

        int F = solve(B,N-1),lo = 0,hi = B,mi;

        while(lo < hi){
            mi = (lo + hi)>>1;

            if(solve(mi,N-1) < F) lo = mi+1;
            else hi = mi;
        }

        printf("%d %d\n",lo,F);
    }

    return 0;
}
