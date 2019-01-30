/****************************************************************************
	�ζ� - ��� 
	https://www.acmicpc.net/problem/6603
******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;

vector<int> lotto;
void solve(vector<int> &a, int index, int cnt) {
	// ������ ã�Ҵٸ� ���! 
	if( cnt == 6) {
		for( int num : lotto ) {
			printf("%d ", num);
		} 
		printf("\n");
		return;
	}
	
	int n = a.size();
	
	//���� a�� ����ִ� ��� ���ڵ��� ��ȸ 
	if(n == index) return;
	
	 
	lotto.push_back(a[index]);
	solve(a, index+1, cnt+1);
	
	lotto.pop_back();
	solve(a, index+1, cnt);
	
}

 
int main() {
	//�ζ� 1~49
	while(true){
		int k; // 6< k < 13
		scanf(" %d", &k);
		if( k == 0) break; // k�� 0 �̸� ���� ����;
		
		vector<int> a(k); // k���� ���ڸ� �����ϴ� ���� 
		
		for(int i=0; i<k; i++) {
			scanf(" %d", &a[i]);
		}
		solve(a, 0, 0);
		printf("\n");
	}
	
	return 0;
} 
