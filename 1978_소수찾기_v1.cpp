/*****************************************************
	소수찾기
	https://www.acmicpc.net/problem/1978
******************************************************/

#include <iostream>
using namespace std;
bool prime(int n);

int main(){
	int t, cnt=0;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(prime(n)){
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}

bool prime(int n){
	if(n<2){
		return false;
	}
	for(int i=2; i*i<=n; i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
