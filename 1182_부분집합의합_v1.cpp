/**********************************************************
	�κ������� �� 
	https://www.acmicpc.net/problem/1182
***********************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solve (int s, vector<int> &a, int sum, int index) {
	// a�� ��� ��ȸ�ϸ鼭 �˻� 
	if( index == a.size()){
		if( sum == s ) {
			return 1;	
		} else{
			return 0;
		}
	}
	
	return solve(s, a, sum, index+1)+solve(s, a, sum+a[index], index+1);	
}


int main() {
	//�Է� n: ������ ����, s: �κ������� �� 1 =< n <= 20,  |s|<=1000000 
	int n, s;
	scanf("%d %d", &n, &s);
	
	vector<int> a(n);
	
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);	
	} 
	
	sort(a.begin(), a.end());
	
	int ans;
	ans = solve(s, a, 0, 0);
	
	if(s==0) ans--;
	
	printf("%d", ans);
	
	return 0;
} 
