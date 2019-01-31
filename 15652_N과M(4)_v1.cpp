/**********************************************************
	N과 M(3) - 중복x 
	https://www.acmicpc.net/problem/15652
***********************************************************/

#include <iostream>
using namespace std;

// 조건 1: 1부터 N까지 자연수 중에서 M개를 고른 수열
// 조건 2: 같은 수를 여러 번 골라도 된다.
// 고른 수열은 비내림차순이어야 한다.
// 11, 12, 13, 14, 22, 23, ... 

int a[10];

void solution(int n, int m, int start, int index){
	if( index == m) {
		for( int i=0; i<m; i++){
			printf("%d ", a[i]);
		}
		printf("\n");
		return;
	} 
	
	for( int i = 1; i<=n; i++) {
		if( i < start ) continue;
		a[index] = i;
		solution(n, m, i, index+1); 
	}
}

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	solution(n, m, 1, 0);
	return 0;
}













