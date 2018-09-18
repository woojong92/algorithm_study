#include <iostream>
using namespace std;

int main(){
	int t;//t는 테스트 케이스의 개수 
	scanf(" %d", &t);
	
	for(int i=1; i<=t; i++){
		long long n;//n은 입력받는 정수 
		scanf(" %lld", &n);
		long long ans=-1;//ans는 출력 값
		 
		for(long long j=1; j*j*j<n+1; j++){
			if(j*j*j==n){
				ans=j;				
			}			
		}
		printf("#%d %lld\n", i, ans); 
	} 
	return 0;
}
