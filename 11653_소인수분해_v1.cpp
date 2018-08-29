/************************************************
	���μ�����
	��ó: https://www.acmicpc.net/problem/11653 
************************************************/

#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	for(int i=2; i*i<=n; i++){
		while(n%i==0){
			printf("%d\n", i);
			n /=i;
		}
	}
	if(n>1){
		printf("%d\n", n);
	}
	return 0;	
} 
