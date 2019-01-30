/**********************************************************
	1,2,3���ϱ�_v2 - ��� 
	https://www.acmicpc.net/problem/9095
***********************************************************/
#include <iostream>
#include <vector>
using namespace std;

//n�� 1,2,3�� ������ ��Ÿ���� ����� �� 
int solve(int sum, int goal){
	 // 1, 2, 3
	 if( sum > goal ) return 0;
	 if( sum == goal) return 1;
	 
	 int now =0;
	 
	 for( int i= 1; i<=3; i++) {
	 	now += solve(sum+i, goal);
	 }
	 
	 return now;
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf(" %d", &n);
		int ans;
		ans = solve(0, n);
		
		printf("%d\n", ans);
	}
	return 0;
} 
