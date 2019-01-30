/****************************************************************************
	로또 - 재귀 
	https://www.acmicpc.net/problem/6603
******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;

vector<int> lotto;
void solve(vector<int> &a, int index, int cnt) {
	// 정답을 찾았다면 출력! 
	if( cnt == 6) {
		for( int num : lotto ) {
			printf("%d ", num);
		} 
		printf("\n");
		return;
	}
	
	int n = a.size();
	
	//벡터 a에 들어있는 모든 숫자들을 순회 
	if(n == index) return;
	
	 
	lotto.push_back(a[index]);
	solve(a, index+1, cnt+1);
	
	lotto.pop_back();
	solve(a, index+1, cnt);
	
}

 
int main() {
	//로또 1~49
	while(true){
		int k; // 6< k < 13
		scanf(" %d", &k);
		if( k == 0) break; // k가 0 이면 실행 종료;
		
		vector<int> a(k); // k개의 숫자를 저장하는 벡터 
		
		for(int i=0; i<k; i++) {
			scanf(" %d", &a[i]);
		}
		solve(a, 0, 0);
		printf("\n");
	}
	
	return 0;
} 
