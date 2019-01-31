/**********************************************************
	N�� M(3) - �ߺ�x 
	https://www.acmicpc.net/problem/15652
***********************************************************/

#include <iostream>
using namespace std;

// ���� 1: 1���� N���� �ڿ��� �߿��� M���� �� ����
// ���� 2: ���� ���� ���� �� ��� �ȴ�.
// �� ������ �񳻸������̾�� �Ѵ�.
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













