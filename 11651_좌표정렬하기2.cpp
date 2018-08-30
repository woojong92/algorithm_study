/******************************************************
	좌표 정렬하기 2
	문제출처- https://www.acmicpc.net/problem/11651 
*******************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n; 
	cin >> n;

	vector<pair<int,int> > vec(n);
	for(int i=0; i<n; i++){
		cin >> vec[i].second >> vec[i].first ;
	}
	
	sort(vec.begin(), vec.end());
	
	for(int i=0; i<n; i++){
		cout << vec[i].second << ' ' << vec[i].first <<'\n' ;
	}
}
