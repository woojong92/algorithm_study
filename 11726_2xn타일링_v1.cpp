#include <iostream>
using namespace std;

int d[1001];

int go(int n) {
    if(n <= 1) return 1;
    if(d[n] > 0) return d[n]; // 메모이제이션
    d[n] = go(n-1)%10007 + go(n-2)%10007;
    return d[n];
}

int main() {
    int n;
    scanf(" %d", &n);
    int ret = go(n);
    
    printf("%d\n", ret%10007);
    return 0;
}
