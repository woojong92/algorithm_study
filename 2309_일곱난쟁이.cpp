/**********************************************************
	일곱 난쟁이 
	https://www.acmicpc.net/problem/2309	
***********************************************************/
#include <iostream>
#include <algorithm>
using namespace std;
int a[9]; // 난쟁이들의 키를 저장하는 배열 
int n = 9; // 난재이들의 수 

int main() {
	int sum =0;
	for( int i =0 ; i < n ; i++ ) {
		cin >> a[i] ; // 난쟁이의 키 입력 
		sum += a[i] ;
	}
	
	sort(a, a+n);
	
	for( int i =0 ; i<n ; i++) {
		for(int j =i+1 ; j<n ; j++) { 
			if( sum - a[i] - a[j] == 100) {
				for( int k=0; k<n; k++) {
					if( i==k || j==k ) continue; 
					cout << a[k] << '\n';
				}
				return 0; 
			}
		}
	}
	return 0;
}
