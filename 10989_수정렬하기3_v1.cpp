/********************************************************************************
	수정렬하기3
	문제출처-  https://www.acmicpc.net/problem/10989
	메모리 초과됨 
*********************************************************************************/

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	vector<int> v(n);
	
	for(int i=0; i<n ; i++){
		cin >> v[i];
	}
	
	priority_queue<int,vector<int>,greater<int>> pq {greater<int>(), v};
	
	for(int i=0; i<n; i++){
		cout << pq.top() << '\n';
		pq.pop();
	}
	return 0;
}
