/**************************************************
	'에라토스테네스의 체'를 이용한 소수구하기 
***************************************************/

#include <iostream>
using namespace std;

int main(){
	int p[100]; // 소수저장 
	int pn=0; //소수의 개수 
	bool c[101]; //지워졌으면 true 
	int n=100; // 100까지의 소수 
	
	for(int i=2; i<=n; i++){
		if(c[i]==false){
			p[pn++]=i;
			for(int j=i+i; j<=n ; j+=i){
				c[j]=true;
			}
		}
	}
	
	for(int k=0; k<pn; k++){
		printf("%d ", p[k]);		
	}

	return 0;	
}
