/**********************************************************
	N°ú M(3) 
	https://www.acmicpc.net/problem/15651
***********************************************************/

#include <iostream>
using namespace std;

int a[10];

void solution(int n, int m, int index) {
	if( index == m) {
		for( int i=0; i<m; i++) {
			printf("%d ", a[i]);
		}
		printf("\n");
		return;
	}
	
	for( int i=1; i<=n; i++) {
		a[index] = i;
		solution(n, m, index+1);
	}
	
}

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	solution(n, m, 0);
	
	return 0;
}
