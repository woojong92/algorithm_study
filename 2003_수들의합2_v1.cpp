/********************************************************************************
	수들의 합 2 
	https://www.acmicpc.net/problem/2003
*********************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int main () {
	int n, m;
	cin >> n >> m;
	
	vector<int> a(n);
	for( int i=0; i<n; i++ ) {
		cin >> a[i];
	}
	
	int cnt=0;
	int sum=0;
	
	for( int i=0; i<n; i++) {
		for( int j=i; j<n; j++ ) {
			
			if( i==j ) {
				sum = a[j];	
			}else {
				sum += a[j];
			}
			
			if( sum > m ) {
				break;
			}else if( sum == m ) {
				cnt++;
				break;
			} 
		}
	}
	
	cout << cnt << '\n';
	return 0;
} 
