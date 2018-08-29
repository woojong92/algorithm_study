/**************************************************
	소수 구하기 
	출처: https://www.acmicpc.net/problem/1929
***************************************************/

#include <iostream>
using namespace std;

int main(){
	int p[1000]; // 소수저장 
	int pn=0; //소수의 개수 
	bool c[1000000]; //지워졌으면 true 
	int n, m;
	
	cin >> n >> m;

	for(int i=2; i<=m; i++){
		if(c[i]==false){
			p[pn++]=i;
			for(int j=i+i; j<=m ; j+=i){
				c[j]=true;
			}
		}
	}
	
	for(int k=0; k<pn; k++){
		if(p[k]>=n){
			printf("%d\n", p[k]);	
		}
	}

	return 0;	
}

