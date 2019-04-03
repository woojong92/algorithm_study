/*****************************************************************
	�ﰢ���� �� 
	https://www.acmicpc.net/problem/4902
******************************************************************/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// ���� �ﰢ���� n=1 �� �ﰢ��
// �ﰢ���� ���� �ﰢ�� �ȿ� �ִ� ���� �ﰢ���� ���� ��
// �ﰢ���� �־����� ��, ���� ū ���� ���� �κ� �ﰢ���� ���ϴ� ���α׷��� �ۼ�.
 
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
	// ���� ���� �׽�Ʈ ���̽�
	// �� �׽�Ʈ ���̽��� ���ٷ�
	// ù ���� ���ڴ� ���� ��, ���� ���ڴ� ���� �ﰢ���� �����ִ� ���� 
	// ������ �Ʒ�, ���ʿ��� ������ ������� �־�����. 
	// ������ �ٿ��� 0
	
	for( int tc = 1 ;; tc++ ){
		cin >> n;
		if( n == 0 ) break;
		ans = -1000;
		for( int i=1; i<=n; i++ ) {
			for( int j=1 ; j<=2*i-1; j++ ) {
				cin >> a[i][j];
				s[i][j] = s[i][j-1] + a[i][j]; // ������ 
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


