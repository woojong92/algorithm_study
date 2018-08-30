/*************************************************
	수 정렬하기2
	https://www.acmicpc.net/problem/2751	
*************************************************/

#include <iostream>
#include <algorithm>
using namespace std;
int n[1000001];
int main(){

	int nc; //n의 개수 

	cin >> nc;
	for(int i=0; i<nc; i++){
		cin >> n[i];
	}
	
	sort(n, n+nc);
	
	for(int i=0; i<nc; i++){
		cout << n[i] << ' ';
	}
	
	return 0; 
}

