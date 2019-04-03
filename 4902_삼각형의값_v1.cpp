/*****************************************************************
	삼각형의 값 
	https://www.acmicpc.net/problem/4902
******************************************************************/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// 단위 삼각형은 n=1 인 삼각형
// 삼각형의 값은 삼각형 안에 있는 단위 삼각형의 값의 합
// 삼각형이 주어졌을 때, 가장 큰 값을 갖는 부분 삼각형을 구하는 프로그램을 작성.
 
int n;
int a[401][801];
int s[401][801];
int ans =0;

void calc( int row, int left, int right, int sum) {
	if( row < 1 || row > n ) return;
	if( left < 1 || right > 2*row-1) return;
	
	sum += s[row][right] - s[row][left-1];
	if( sum > ans ) ans = sum;
	if( left % 2 == 0) {
		calc(row-1, left-2, right, sum);
	}else {
		calc(row+1, left, right+2, sum);
	}
}

 
int main(void) {
	// 여러 개의 테스트 케이스
	// 각 테스트 케이스는 한줄로
	// 첫 번재 숫자는 줄의 수, 다음 숫자는 단위 삼각형에 적혀있는 값이 
	// 위에서 아래, 왼쪽에서 오른쪽 순서대로 주어진다. 
	// 마지막 줄에는 0
	
	for( int tc = 1 ;; tc++ ){
		cin >> n;
		if( n == 0 ) break;
		ans = -1000;
		for( int i=1; i<=n; i++ ) {
			for( int j=1 ; j<=2*i-1; j++ ) {
				cin >> a[i][j];
				s[i][j] = s[i][j-1] + a[i][j]; // 누적합 
			}
		}
		for( int i=1; i<=n; i++) {
			for( int j=1; j<= 2*n-1; j++) {
				calc(i, j, j, 0);
			}
		} 
		cout << tc << "." << ans << '\n';
	}
	return 0;

	 
	  
} 


