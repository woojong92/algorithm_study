/******************************************
	진법 변환 2 
	https://www.acmicpc.net/problem/11005
******************************************/
#include <iostream>
using namespace std;

int main() {
	int n, b, x;
	char c[36]={'0','1','2','3','4','5','6','7','8','9',
				'A','B','C','D','E','F','G','H','I','J',
				'K','L','M','N','O','P','Q','R','S','T',
				'U','V','W','X','Y','Z'};
	/*
	for(int i=0; i<36; i++){
		printf("%c ", c[i]);
	}
	*/
	
	// 입력  
	cin >> n >> b ;
	
	//cout << n << " " << b ;
	
	int d[100000]; 
	int cnt=0;
	
	while(n>0){
		int x= n%b;
		d[cnt]=x;
		cnt++;
		n/=b;
	}
	
	for(int i=cnt-1; i>=0; i--){
		printf("%c", c[d[i]]);
	}
	return 0;
}
  
