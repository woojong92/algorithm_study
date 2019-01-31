/**********************************************************
	N°ú M(3) - Áßº¹x 
	https://www.acmicpc.net/problem/15654
***********************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int num[10];
int ans[10];
bool check[10];

void solution(int n, int m, int index){
	if( index == m ) {
		for( int i=0; i<m; i++) {
			printf("%d ", ans[i]);
		}
		printf("\n");
	 	return;
	}
	
	for( int i=0; i<n; i++) {
		if(check[i]==true) continue;
		ans[index] = num[i];
		check[i] = true;
		solution(n, m, index+1);
		check[i] = false;
	}
}

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	
	for( int i=0; i<n; i++) {
		scanf(" %d", &num[i]);
	}
	
	sort(num, num+n);
	
	solution(n, m, 0);
	
	return 0;
}
