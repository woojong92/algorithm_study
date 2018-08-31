/****************************************************************
	k번째 수
	문제출처- https://www.acmicpc.net/problem/11004  
****************************************************************/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	vector<int> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
	}
	
	/* nth_element < partial_sort < sort < stable_sor */
	sort(v.begin(), v.end());
	
	cout << v[k-1] << '\n';
	return 0;
} 
