/********************************************************************************
	부분합 
	https://www.acmicpc.net/problem/1806
*********************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, s; 
	scanf(" %d %d", &n, &s);
	
	vector<int> a(n);
	
	for( int i=0; i<n; i++) {
		scanf(" %d", &a[i]);
	}
	
	int left = 0;
	int right = 0;
	int sum = a[0];
	int len = 0;
	int ans = 100000000000;
	int cnt = 0;
	
	while( left <= right && right < n ) {
		
		//정답일때 
		if( sum >= s ) {
			len = right-left+1;
			cnt++;

			if( ans > len) ans = len;
			//printf("%d %d %d\n", len, ans, cnt);
			
			sum -= a[left];
			left++;
						
			if( left > right && left < n ) {
				sum = a[left];
				right = left;				
			}
	 
		}else{ //정답이 아닐 때 
			
			right++;
			sum += a[right];
		}
		
	}	
	
	if( cnt == 0 ) ans=0;
	
	printf("%d\n", ans);
	
	return 0;
} 





















