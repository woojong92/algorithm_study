/********************************************************************************
	�������ϱ�3
	������ó-  https://www.acmicpc.net/problem/10989
	�޸� �ʰ��� 
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
