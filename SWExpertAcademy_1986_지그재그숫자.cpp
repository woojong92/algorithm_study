/*
*	1986. 지그재그 숫자 
*/

#include <iostream>

int main() {
	
	int t;
	
	scanf("%d", &t);
	
	for ( int test_case=1; test_case <= t; test_case++ ){
		int n, answer=0;
		scanf(" %d", &n);
		
		for( int i = 1 ; i <= n ; i++ ) {
			if(i%2 == 1) answer += i;
			else	answer -= i;
		}
		printf("#%d %d\n", test_case, answer);
	}
	return 0;
} 
