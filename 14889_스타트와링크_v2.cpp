/************************************************************************
	스타트와 링크
	https://www.acmicpc.net/problem/14889 
************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int s[20][20];
int n;

int go( int index, vector<int> &first, vector<int> &second ) {

	if(index == n) { //정답을 찾을 경우 
		if( first.size() != n/2 ) return -1; 
		if( second.size() != n/2 ) return -1;
		int t1 = 0;
		int t2 = 0;
		for( int i =0; i<n/2; i++ ) {
			for( int j=0; j<n/2; j++ ) {
				if( i==j ) continue;
				t1 += s[first[i]][first[j]];
				t2 += s[second[i]][second[j]];
			}
		}  
		int diff = t1-t2;
		if(diff < 0 ) diff = -diff;
		return diff;
	}
	
	//불가능한 경우 
	if( first.size() > n/2 ) return -1; 
	if( second.size() > n/2 ) return -1;
	
	int ans = -1;
	first.push_back(index);
	int t1 = go(index+1, first, second);
	//아직 정답을 구하지 않았거나, 인덱스를 first에 가능하고 내가 지금까지 구한 정답보다 작으면,  
	if( ans == -1 || (t1 != -1 && ans > t1)) {
		ans = t1;
	}
	first.pop_back();
	second.push_back(index);
	int t2 = go(index+1, first, second);
	if( ans == -1 ||  ( t2 != -1 && ans > t2 ) ) {
		ans = t2;
	}
	second.pop_back();
	return ans;
}

int main() {
	cin >> n;
	for( int i=0; i<n; i++ ){
		for( int j=0; j<n; j++ ){
			cin >> s[i][j];
		}
	}
	vector<int> first, second;
	cout << go(0, first, second) << '\n';
	
	return 0;
}
















