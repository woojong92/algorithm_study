/**********************************************************
	��� 
	https://www.acmicpc.net/problem/14501
***********************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// ���ϴ� ��¥�� ����� ���� ũ�� �ȵȴ�.
// n��°���� ��� ��츦 �˻��ؾ��Ѵ�. 


void solve(vector<pair<int,int> > &a, int n, int day, int total, int *result){
	//printf("%d %d %d\n", day, *result, total); 
	
	if( day == n+1 ) {
		if( *result < total ) *result = total;
		return;	
	}
	
	if( day > n+1 ) {
		return;
	}

	 
	// ���� �ϴ� ��� 
	solve(a, n, day+a[day].first, total+a[day].second, result); 
	
	// ���� ���� �ʴ� ��� 
	solve(a, n, day+1, total, result);
}

int main() {
	int n;
	scanf("%d", &n);
	
	vector<pair<int,int> > a(n+1);
	
	for(int i=1; i<n+1; i++) {
		scanf("%d %d", &a[i].first, &a[i].second);	
	}
	
	int result=0;
	
	solve(a, n, 1, 0, &result);
	
	printf("%d", result);
	return 0;
}
