/******************************************************
	���丮�� 0�� ����
	N!�� 0�� ������ N!�� �μ��� 5^k�� k�� ���ϸ� �ȴ�. 
	��ó: https://www.acmicpc.net/problem/1676 
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
