/*
	암호코드
	출처:  https://www.acmicpc.net/problem/2011
*/

#include <iostream>
using namespace std;

long long cache[5001];
long long mod=1000000;

int main(){
	int n;

	scanf("%d", &n);
	cache[0]=1;

	for(int i=1; i<=n; i++){
		int x=n%100;
		int y=n%10;
		
		//printf("%d %d\n", x, y);
		
		if(x!=y){
			cache[i]+=cache[i-1];
			cache[i]%=mod;
		}
		if(y>=10 && y<=26){
			cache[i]+=cache[i-2];
			cache[i]%=mod;
		}
	 	
	 	printf("%d : %d \n", i, cache[i]);
	}
	printf("%d\n", cache[n]);
	return 0;
		
} 
