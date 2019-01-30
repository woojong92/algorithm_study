/**********************************************************
	1,2,3더하기_v2 - 재귀 
	https://www.acmicpc.net/problem/9095
***********************************************************/
#include <iostream>
#include <vector>
using namespace std;

//n을 1,2,3의 합으로 나타내는 방법의 수 
int solve(int sum, int goal){
	 // 1, 2, 3
	 if( sum > goal ) return 0;
	 if( sum == goal) return 1;
	 
	 int now =0;
	 
	 for( int i= 1; i<=3; i++) {
	 	now += solve(sum+i, goal);
	 }
	 
	 return now;
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf(" %d", &n);
		int ans;
		ans = solve(0, n);
		
		printf("%d\n", ans);
	}
	return 0;
} 
