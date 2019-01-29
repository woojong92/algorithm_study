/****************************************************************************
	외판원 순회 2 
	https://www.acmicpc.net/problem/10971
	
	외판원 순회 문제는 영어로 Traveling Salesman problem (TSP) 라고 불리는 
	문제로 computer science 분야에서 가장 중요하게 취급되는 문제 중 하나이다.
******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int w[10][10];

int main() {
	int n;
	scanf(" %d", &n); // 2 =< n <= 10
	vector<int> a(n);
	
	for(int i=0; i<n; i++){
		a[i]=i;
		for(int j=0; j<n; j++) {
			scanf(" %d", &w[i][j]); // 1000000이하의 양의 정수 입력 
		}
	}
	
	int ans = 2147483647;
	
	do{
		bool ok =true;
		int sum =0;
		
		for(int i=0; i<n-1; i++){
			if( w[a[i]][a[i+1]] == 0) {
				ok= false;
				break;
			} else{
				sum += w[a[i]][a[i+1]];
			}
		}
		
		if( ok && w[a[n-1]][a[0]] != 0){
			sum += w[a[n-1]][a[0]];
			if( ans > sum ) ans = sum;
		}
		
	}while( next_permutation(a.begin(), a.end()));
	
	printf("%d", ans);
	return 0;
	
} 



