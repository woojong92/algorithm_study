/*
	합분해 문제
	출처: https://www.acmicpc.net/problem/2225 
*/

#include <iostream>
using namespace std;

long long mod = 1000000000;
long long cache[201][201];

int main(){
	long long n, k;  //  1 <= n <= 200 , 1 <= k <= 200 
	
	cin>>n;
	cin>>k;
	
	cache[0][0]=1LL; 
	
	for(int i=1; i<=k; i++){
		for(int j=0; j<=n; j++ ){
			for(int l=0; l<=j; l++){
				cache[i][j]+=cache[i-1][j-l];
				cache[i][j]%=mod;
			}
		}	
	}
	
	cout<< cache[k][n]<<'\n';
	
	return 0; 
}
	 
