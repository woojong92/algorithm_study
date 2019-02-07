/**********************************************************	
	������
	https://www.acmicpc.net/problem/1107 
**********************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool broken[10]; 

int possible(int c) {
	if( c== 0) {
		if(broken[0]) {
			return 0;
		} else {
			return 1;
		}
	}

	int len = 0;

	while ( c > 0 ) {
		if( broken[c%10]) {
			return 0;
		}
		len += 1;
		c /= 10;
	}

	return len;
}

int main() {
	int n, m;
	scanf(" %d", &n); // �̵��Ϸ��� �ϴ� ä�� n  0 =< n <= 500000
	scanf(" %d", &m); // ���峭 ��ư�� ����m  0 =< m <= 10
	
	for(int i=0 ; i<m ; i++) {
		int broken_num;
		scanf(" %d", &broken_num);
		broken[broken_num] = true;
	}
	
	int ans = abs(n-100); // +, - �� �̿����� ��� 
	
	for( int i=0; i<= 1000000; i++) {
		int c = i;
		int len = possible(c);
		if( len > 0) {
			int press = abs(c- n); // +, - ��� �� 

			if( ans > len + press) {
				ans = len + press;
			}
		}
	}
	
	printf("%d\n", ans);
	return 0;	
	
} 
