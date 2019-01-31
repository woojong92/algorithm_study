/**********************************************************
	N°ú M(2) - Áßº¹x 
	https://www.acmicpc.net/problem/15650
***********************************************************/

#include <iostream>
using namespace std;

bool check[10];
int a[10];

void solution(int n, int m, int start, int index){
	if( index == m ){
		for( int i=0; i<m; i++) {
			printf("%d ", a[i]);
		}
		printf("\n");
		return;
	}
	
	for( int i=start; i<=n; i++) {
		if( check[i] == true ) continue;
		a[index] = i;
		check[i] = true;
		solution(n, m, i+1, index+1);
		check[i] = false;	
	}
}

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	
	solution(n, m, 1, 0);
	
	return 0;
}
