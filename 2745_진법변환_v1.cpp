/************************************************
	진법변환 
	https://www.acmicpc.net/problem/2745
*************************************************/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

long long z(int b, int n){
	int result =1;
	if(n==0) return 1;
	for(int i=1; i<=n; i++){
		result*=b;
	}
	return result;	
}

int main(){
	string n;
	int b;
	long long ans=0;
	
	cin >> n >> b;
	//cout << n << ' ' << b << '\n';

	for(int i=0; i<n.size(); i++){
		
		if('0'<=n[i] && n[i]<='9'){
			ans += (n[i]-'0')* z(b, n.size()-i-1);
		}else{
			ans += (n[i]-'A'+10)* z(b, n.size()-i-1);
		}
	}
	
	cout<< ans << '\n';
	
	return 0;
}
