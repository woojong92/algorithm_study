/**
*	1859. �鸸���� ������Ʈ 
* 
*/

#include <iostream>

using namespace std;
long long a[1000001];
int main(){
 	int T, N;
    scanf("%d", &T); //testcase �Է�
	
	/* testcase ��ŭ �ݺ�*/ 
    for(int testcase=1; testcase <= T; testcase++){
 		
		scanf(" %d", &N); //�Է��� ������ ���� 
        
        scanf(" %d", &a[0]);
		for(int i=1 ; i<N; i++){
        	scanf(" %d", &a[i]); 
		}
		
		int curMax = 0; 
		unsigned long long sum = 0;
		for( int i = N-1 ; i >= 0 ; i--){
			if( curMax < a[i]) { curMax = a[i]; } 
			sum += curMax - a[i];
		}
		printf("#%d %llu\n", testcase, sum);
    }

    return 0;
}
