/**********************************************************
	퇴사 
	https://www.acmicpc.net/problem/14501
***********************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 일하는 날짜가 퇴사일 보다 크면 안된다.
// n번째까지 모든 경우를 검사해야한다. 


void solve(vector<pair<int,int> > &a, int n, int day, int total, int *result){
	//printf("%d %d %d\n", day, *result, total); 
	
	if( day == n+1 ) {
		if( *result < total ) *result = total;
		return;	
	}
	
	if( day > n+1 ) {
		return;
	}

	 
	// 일을 하는 경우 
	solve(a, n, day+a[day].first, total+a[day].second, result); 
	
	// 일을 하지 않는 경우 
	solve(a, n, day+1, total, result);
}

int main() {
	int n;
	scanf("%d", &n);
	
	vector<pair<int,int> > a(n+1);
	
	for(int i=1; i<n+1; i++) {
		scanf("%d %d", &a[i].first, &a[i].second);	
	}
	
	int result=0;
	
	solve(a, n, 1, 0, &result);
	
	printf("%d", result);
	return 0;
}
