/***********************************************************
	이동하기
	https://www.acmicpc.net/problem/11048
***********************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int a[1001][1001];
int d[1001][1001];

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	for( int i=1; i<=n; i++){
		for( int j=1; j<=m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	// i-1, j-1 범위를 검사하지 않은 이유 : a[i][j] >= 0 
	for( int i=1; i<=n; i++) {
		for( int j=1; j<=m; j++ ){
			d[i][j] = max( max(d[i-1][j], d[i][j-1]), d[i-1][j-1]) + a[i][j];
		}
	}
	
	printf("\n");
	for( int i=0; i<=n; i++) {
		for( int j=0; j<=m; j++ ){
			printf("%d ", d[i][j]);
		}
		printf("\n");
	}
	
	printf("%d\n", d[n][m]);
	return 0;
} 
