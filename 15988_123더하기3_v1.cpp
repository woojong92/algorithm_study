#include <iostream>
using namespace std;

long long d[1000001];
const long long mod = 1000000009LL;

long long go(int n) {
	if( n <= 1 ) return 1;
	if( d[n] > 0 ) return d[n];
	
	if( n-1 >= 0 ) d[n] += go(n-1)%mod;
	if( n-2 >= 0 ) d[n] += go(n-2)%mod;
	if( n-3 >= 0 ) d[n] += go(n-3)%mod;
	
	d[n] %= mod;
	return d[n];
}

int main() {
	int t;
	scanf("%d", &t);
	
	while(t--) {
		int n;
		cin >> n;
		
		long long ret = go(n);
		cout << ret << '\n';
	}
	
	return 0;
}
