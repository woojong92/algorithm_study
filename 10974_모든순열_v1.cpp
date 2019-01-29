/**********************************************************
	모든 순열 
	https://www.acmicpc.net/problem/10974
	
	순열이란? 몇 개를 골라 순서를 고려해 나열한 경우의 수를 말한다. 
	즉, 서로 다른 n 개 중 r 개를 골라 순서를 정해 나열하는 가짓수이며 
	순열이라는 의미의 영어 ‘Permutation’의 첫 글자 P를 따서 
	nPr로 표시한다.
***********************************************************/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n;
	scanf(" %d", &n);
	vector<int> a(n);
	for(int i=0; i<n; i++) a[i] = i+1;
	do{
		for(int i=0; i<n; i++) {
			printf("%d ", a[i]);
		}
		printf("\n");
	}while(next_permutation( a.begin(), a.end()));
	return 0; 
}

