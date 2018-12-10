#include <iostream>
using namespace std;

int na[15][15];

int main() {
	int T;
	scanf("%d", &T);
	
	for ( int test_case = 1 ; test_case <= T ; test_case++ ) {
		//N�� 5 �̻� 15 ����
		//M�� 2 �̻� N ����
		//�� ������ �ĸ� ������ 30 ���� 
		int N, M; 
		scanf(" %d %d", &N, &M);
		 
		for( int i = 0 ; i < N ; i++ ) {
			for( int j = 0 ; j < N ; j++ )	{
				scanf(" %d", &na[i][j]);
			}
		}
		
		int sum, answer=0;
			
		for( int i = 0 ; i <= N - M ; i++ ){
			for ( int j = 0 ; j <= N - M ; j++ ){
				sum = 0;
				for( int k = i ; k < i+M ; k++ ){
					for( int z = j ; z < j+M ; z++){
						sum += na[k][z];
					}
				}
				if( sum > answer) answer = sum;
			}
		}
		
		
		printf("#%d %d\n", test_case, answer);
	}
}
