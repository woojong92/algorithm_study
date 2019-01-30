/**********************************************************
	N°ú M(1) 
	https://www.acmicpc.net/problem/15649
***********************************************************/

#include <iostream>
#include <vector>
using namespace std;

int a[10];
bool check[10];

void solution(int n, int m, int index){
	if(index == m){
		// Ãâ·Â!
		for( int i=0; i< m; i++){
			printf("%d ", a[i]);
		}
		printf("\n");
		return;
	}
	
	for( int i=1; i<=n; i++){
		if( check[i] ) continue;
		check[i] = true;
		a[index] = i;
		solution(n, m, index+1);
		check[i] = false;
	}
}

int main( ) {
	int n, m;
	scanf("%d %d", &n, &m);
	
	solution(n, m, 0);	
	return 0;
}
