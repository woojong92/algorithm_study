/**********************************************************	
	수 이어 쓰기1 
	https://www.acmicpc.net/problem/1748
**********************************************************/
#include <iostream>
using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	long long ans = 0;
	
	// start; 1- > 10 -> 100 -> ...
	// end; 9 -> 99 -> 999 -> ...
	
	for( int start=1,len=1; start<n ; start*=10, len++ ){
		int end = start*10-1;
		
		if( end > n ) {
			end = n;
		}
		
		ans += (long long)(end - start + 1 ) * len;
		
	}
	
	printf("%d\n", ans);
	return 0;
} 
