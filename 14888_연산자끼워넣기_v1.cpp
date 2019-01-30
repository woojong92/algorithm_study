/****************************************************************************
	������ �����ֱ� - ���� ��� 
	https://www.acmicpc.net/problem/14888
******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 

int calc(vector<int> &a, vector<int> &b){
	int n = a.size();
	int ans = a[0];
	for(int i=1; i<n; i++) {
		//0: ����, 1: ����, 2: ����, 3: ������ 
		if(b[i-1] ==0 ){
			ans += a[i];
		} else if( b[i-1] == 1){
			ans -= a[i];
		} else if( b[i-1] == 2){
			ans *= a[i];
		} else {
			ans /= a[i];
		}
	}
	return ans; 
} 

int main() {
	int n;
	scanf(" %d", &n);
	
	//���� a�� n���� ���� �̷���� ���� 
	vector<int> a(n);
	for( int i=0; i<n; i++ ){
		scanf(" %d", &a[i]);
	}
	
	// ���� b�� �����ڸ� ���� 0: ����, 1: ����, 2: ����, 3: ������ 
	// n-1���� �����ڰ� �־��� 
	vector<int> b;
	for( int i = 0 ; i<4; i++) {
		int cnt;
		scanf(" %d", &cnt);
		for( int k=0; k<cnt; k++) {
			b.push_back(i);
		}
	}
	
	vector<int> result;
	do{
		int temp = calc(a, b);
		result.push_back(temp);
	}while(next_permutation(b.begin(), b.end()));
	
	auto ans = minmax_element(result.begin(), result.end());
	
	printf("%d\n", *ans.second );
	printf("%d\n", *ans.first );
	
	return 0;	
}






