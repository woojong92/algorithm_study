/**********************************************************
	차이를 최대로
	https://www.acmicpc.net/problem/10819
***********************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n; // 3 =< n <= 8
	scanf("%d", &n);
	vector<int> a(n);
	for(int i=0; i<n; i++){
		scanf(" %d", &a[i]);
	}
	sort(a.begin(), a.end());
	
	int ans = 0 ;
	
	do{
		int sum = 0;
	
		for(int i=0; i<n-1; i++){
			sum += abs(a[i]-a[i+1]);
		}
	
		if( ans < sum ) ans=sum;
	
	}while( next_permutation(a.begin(), a.end()));
	
	printf("%d", ans);
	return 0;
} 
