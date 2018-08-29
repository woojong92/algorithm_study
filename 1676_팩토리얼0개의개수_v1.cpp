/******************************************************
	팩토리얼 0의 개수
	N!의 0의 개수는 N!의 인수로 5^k의 k를 구하면 된다. 
	출처: https://www.acmicpc.net/problem/1676 
******************************************************/

#include <iostream>
using namespace std;

int main(){
	int n, result=0;
	cin >> n;
	for(int i=5; i<n; i *=5){
		result += n/i;
	} 
	cout << result;
	return 0;	
} 
