/**********************************************************
	이전 순열 
	https://www.acmicpc.net/problem/10973
	
	순열이란? 몇 개를 골라 순서를 고려해 나열한 경우의 수를 말한다. 
	즉, 서로 다른 n 개 중 r 개를 골라 순서를 정해 나열하는 가짓수이며 
	순열이라는 의미의 영어 ‘Permutation’의 첫 글자 P를 따서 
	nPr로 표시한다.
***********************************************************/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/*
bool prev_permutation(int *a, int n) {
	int i = n-1;
	while (i > 0 && a[i-1] <= a[i]) i -= 1;
	if (i <= 0) return false; // 마지막 순열
	int j = n-1;
	while (a[j] >= a[i-1]) j -= 1;
	swap(a[i-1], a[j]);
	j = n-1;
	while (i < j) {
		swap(a[i], a[j]);
		i += 1; j -= 1;
	}
	return true;
}
*/

int main() {
	int n;
	scanf(" %d", &n);
	vector<int> a(n);
	for( int i=0; i<n; i++) {
		scanf(" %d", &a[i]);
	}
	if( prev_permutation(a.begin(), a.end())) {
		for (int i=0; i<n; i++) {
			printf("%d ", a[i]);
		}
	} else {
		printf("-1");
	}
	printf("\n");
	return 0;
} 
