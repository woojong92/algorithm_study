/**********************************************************
	��� ���� 
	https://www.acmicpc.net/problem/10974
	
	�����̶�? �� ���� ��� ������ ����� ������ ����� ���� ���Ѵ�. 
	��, ���� �ٸ� n �� �� r ���� ��� ������ ���� �����ϴ� �������̸� 
	�����̶�� �ǹ��� ���� ��Permutation���� ù ���� P�� ���� 
	nPr�� ǥ���Ѵ�.
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

