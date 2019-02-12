#include <iostream>
using namespace std;

int d[11];

int go(int n) {
	if( n <= 1 ) return 1;
	if( d[n] > 0 ) return d[n];
	
	if( n-1 >= 0 ) d[n] += go(n-1);
	if( n-2 >= 0 ) d[n] += go(n-2);
	if( n-3 >= 0 ) d[n] += go(n-3);
	
	return d[n];
}

int main() {
	int t;
	scanf("%d", &t);
	
	while(t--) {
		int n;
		scanf("%d", &n);
		
		int ret = go(n);
		printf("%d\n", ret);
	}
	
	return 0;
}
