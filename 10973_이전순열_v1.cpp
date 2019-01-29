/**********************************************************
	���� ���� 
	https://www.acmicpc.net/problem/10973
	
	�����̶�? �� ���� ��� ������ ����� ������ ����� ���� ���Ѵ�. 
	��, ���� �ٸ� n �� �� r ���� ��� ������ ���� �����ϴ� �������̸� 
	�����̶�� �ǹ��� ���� ��Permutation���� ù ���� P�� ���� 
	nPr�� ǥ���Ѵ�.
***********************************************************/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/*
bool prev_permutation(int *a, int n) {
	int i = n-1;
	while (i > 0 && a[i-1] <= a[i]) i -= 1;
	if (i <= 0) return false; // ������ ����
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
