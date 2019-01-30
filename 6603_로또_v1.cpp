/****************************************************************************
	�ζ� - �����̿� 
	https://www.acmicpc.net/problem/6603
******************************************************************************/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

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
		
		vector<int> d;
		for(int i=0; i<k-6; i++) {
			d.push_back(0);
		} 
		for(int i=0; i<6; i++) {
			d.push_back(1);
		}
		
		vector<vector<int> > ans;
		
		do{
			vector<int> current;
			for( int i=0; i<k; i++) {
				//���õ� ���ڶ�� 
				if(d[i] ==1 ) {
					current.push_back(a[i]);
				}
			}
			ans.push_back(current);
		}while(next_permutation(d.begin(), d.end()));
		
		sort(ans.begin(), ans.end());
		
		for( auto &v : ans ) {
			for( int i=0; i<v.size(); i++ ){
				printf("%d ", v[i]);
			}
			printf("\n");
		} 
		printf("\n");
	} 
	return 0;
} 







