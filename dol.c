#include <iostream>
#include <cstdio>
using namespace std;

typedef long long int LLD;

LLD findLargestOddDivisor(LLD n){
    while(n % 2 == 0){
        n >>= 1;
    }
    return n;
}

int main() {
    LLD t, n, cas=0;
    scanf("%lld", &t);
    while(t--){
        scanf("%lld", &n);
        printf("Case %lld: %lld\n", ++cas, findLargestOddDivisor(n));
    }
    return 0;
}
