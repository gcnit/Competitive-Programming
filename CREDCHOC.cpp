#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string.h>

using namespace std;
int main() {
    long long int n,i;
    double a,f,c;
    char str[1000100];
    scanf("%lld",&n);
    scanf("%s",str);
    scanf("%lf %lf",&a,&f);
    c = 0;
    for(i=0;i<n;i++) {
        if(str[i] == 'L') {
            c = c - a;
        }
        else {
            c = c + a;
        }
        if(abs(c) >= f) {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}
